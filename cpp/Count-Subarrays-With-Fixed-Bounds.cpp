// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long out = 0;
        int bad_idx = -1;
        int min_idx = -1;
        int max_idx = -1;

        for (int i = 0; i < nums.size(); ++i) {
            // If our number is either smaller than min or greater than max it's illegal
            if (nums[i] < minK || nums[i] > maxK){
                bad_idx = i;
            }
            // If our number is minK set it to min idx
            if (nums[i] == minK) {
                min_idx = i;
            }
            // If our number is maxK set it to max idk
            if (nums[i] == maxK) {
                max_idx = i;
            }
            // max 0 , other number handles the case where we have no valid subarrays
            // min(left_idx, right_idx) - bad_idx is handling how many cases we have satisfied
            // both the min and max values minus the last time we saw an illegal value
            out += max(0, min(min_idx, max_idx) - bad_idx);
        }

        return out;
    }
};
