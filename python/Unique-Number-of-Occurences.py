# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/unique-number-of-occurrences/description/

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        count = Counter(arr)
        s = set()
        for val in count.values():
            if val in s:
                return False
            else:
                s.add(val)
        
        return True
