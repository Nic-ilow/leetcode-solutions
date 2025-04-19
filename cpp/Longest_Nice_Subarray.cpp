// https://leetcode.com/problems/longest-nice-subarray/description/
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int longest_nice = 1;
        for (int i=0; i<n; i++){
            bool is_nice = 1;
            for (int j=i+1; j<i+30 && j<n && is_nice; j++){
                for (int k=i; k<j && is_nice; k++){
                    is_nice = !(nums[k]&nums[j]);
                }
                if(is_nice){
                    longest_nice = max(longest_nice, j-i+1);
                }
            }
        }
        return longest_nice;
    }
};
