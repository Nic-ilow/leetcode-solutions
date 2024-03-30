# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/set-mismatch/description/

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        missing_val = list( (set(range(1,len(nums)+1))) - set(nums))[0]

        for i in range(len(nums)-1):
            if nums[i] in nums[i+1:]:
                return [nums[i], missing_val]

