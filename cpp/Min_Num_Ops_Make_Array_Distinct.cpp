// https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> seen;
        int n = nums.size();
        int ans = n/3;
        int counter = 0;
        if (n%3) ans++;
        if (n%3 == 1) counter = 2;
        else if (n%3 == 2) counter = 1;

        for (int i = n-1; i>=0; i--){
            if (seen.count(nums[i])) break;
            seen.insert(nums[i]);
            counter ++;
            if (counter == 3){
                ans --;
                counter = 0;
            }
        }
        return ans;
    }
};
