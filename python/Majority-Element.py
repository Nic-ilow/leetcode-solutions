# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/majority-element/description/

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        for val in list(set(nums)):
            count = nums.count(val)
            if count >= n/2:
                return val
