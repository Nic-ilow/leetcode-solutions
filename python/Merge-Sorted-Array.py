# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/merge-sorted-array/description/

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        nums1_idx = m-1
        nums2_idx = n-1
        write_idx = m+n-1

        while nums2_idx >= 0:
            if nums1_idx >= 0 and nums1[nums1_idx] > nums2[nums2_idx]:
                nums1[write_idx] = nums1[nums1_idx]
                nums1_idx -= 1
            else:
                nums1[write_idx] = nums2[nums2_idx]
                nums2_idx -= 1

            write_idx -= 1
