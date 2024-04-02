# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/isomorphic-strings/

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mapper = {}
        for char_s,char_t in zip(s, t):
            if char_s in mapper.keys():
                if mapper[char_s] != char_t:
                    return False
            mapper[char_s] = char_t
        if len(set(mapper.values()))<len(mapper.values()):
            return False
        
        return True
            
