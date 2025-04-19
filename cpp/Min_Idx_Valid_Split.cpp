// https://leetcode.com/problems/minimum-index-of-a-valid-split/description/
class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> counterMap;
        int numNums = nums.size();
        int initHalf = numNums/2;
        int domNum, domNumCount;

        for (int &num: nums){
            counterMap[num]++;
        }

        for (auto pair: counterMap){
            if (pair.second > initHalf){
                domNum = pair.first;
                domNumCount = pair.second;
                break;
            }
        }

        int firstHalfCount = 0;
        for (int i=0; i<numNums; i++){
            if (nums[i]==domNum){
                firstHalfCount++;
                domNumCount--;
            }
            if (firstHalfCount > (i+1)/2 && domNumCount > (numNums-(i+1))/2) return i; 
        }
        return -1;

    }
};
