// https://leetcode.com/problems/divide-array-into-equal-pairs/description/
class Solution {
public:
    bool divideArray(vector<int>& nums) {
       unordered_map<int,int> counter;

       for (auto val : nums){
        counter[val]++;
       } 
       for (auto [key, value] : counter){
        if (value%2) {
            return false;
        }
       }
       return true;
    }
};
