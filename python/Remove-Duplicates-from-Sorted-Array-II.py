# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        index = 0
        while index < len(nums)-2:
            if nums[index] == nums[index+1]:
                try:
                    while nums[index] == nums[index+2]:
                        nums.pop(index+2)
                except IndexError:
                    pass
            index += 1

        k = len(nums)
        return k
