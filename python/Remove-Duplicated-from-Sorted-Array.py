# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        index = 0
        for i in range(len(nums)-1):
            if nums[index+1] == nums[index]:
                nums.pop(index+1)
                index -= 1
            index += 1
        k = len(nums)
        return k


