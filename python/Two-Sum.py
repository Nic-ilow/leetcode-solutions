# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/two-sum/description/

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for idx, num in enumerate(nums):
            new_target = target-num
            if new_target in nums[idx+1:]:
                second_idx = nums.index(new_target,idx+1)
                return [idx, second_idx]
