# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/roman-to-integer/description/

class Solution:
    def romanToInt(self, s: str) -> int:
        numerals = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        val = 0

        for i in range(len(s)-1):
            if numerals[s[i]] < numerals[s[(i+1)]]:
                val -= numerals[s[i]]
            else:
                val += numerals[s[i]]
        val += numerals[s[-1]]
        return val
