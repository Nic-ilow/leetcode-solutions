# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/merge-two-sorted-lists/description/

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        current = temp = ListNode()

        while list1 and list2:
            if list1.val < list2.val:
                current.next = list1
                list1, current = list1.next, list1
            
            else:
                current.next = list2
                list2, current = list2.next, list2
        
        if list1:
            current.next = list1
        else:
            current.next = list2

        return temp.next
