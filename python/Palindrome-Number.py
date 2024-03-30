# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/palindrome-number/description/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        string = str(x)
        return string==string[::-1]
