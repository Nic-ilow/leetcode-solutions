# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/find-the-winner-of-an-array-game

class Solution:
    def getWinner(self, arr: List[int], k: int) -> int:
        n = 0
        if k>=len(arr):
            return max(arr)
        while(n<k):

            if arr[0]>arr[1]:
                arr.append(arr.pop(1))
                n += 1
            else:
                arr.append(arr.pop(0))
                n = 1
        
        return arr[0]
