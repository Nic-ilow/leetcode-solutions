# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/missing-number/description/

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum_nums = sum(nums)
        all_nums_sum = (len(nums)+1)*len(nums)//2
        return all_nums_sum - sum_nums
