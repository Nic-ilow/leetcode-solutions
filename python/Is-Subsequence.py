# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/is-subsequence/description/

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        s_idx = 0
        t_idx = 0
        if not s:
            return True
        if s and not t:
            return False
        for i in range(len(t)):
            
            if s[s_idx] == t[t_idx]:
                s_idx += 1
                if s_idx == len(s):
                    return True
            t_idx += 1
        return False
        

