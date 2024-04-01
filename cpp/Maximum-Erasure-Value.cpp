// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/maximum-erasure-value/description/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seenNums;
        int currScore = 0;
        int maxScore = 0;
        int counter = 0;

        for (int num : nums){
            // Moves the current window over to the right if num is in seenNums
            // Updates the score and set by removing the leftmost number of the subarray in our old window
            // this repeats until num is no longer found in the set
            while (seenNums.find(num) != seenNums.end()) {
                currScore -= nums[counter];
                seenNums.erase(nums[counter]);
                counter += 1;
            }
            // the value of num is added to the current score
            currScore += num;
            // we have now seen the num so add it to our set
            seenNums.insert(num);
            // update maxScore to be whatever the max of our old maxScore and our curScore is
            maxScore = max(maxScore, currScore);
        }
        return maxScore;
    }
};
