# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/power-of-two/description/

list_powers = [2**x for x in range(-31,31)]
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n in list_powers:
            return True
        else:
            return False
