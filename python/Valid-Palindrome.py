# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/valid-palindrome/description/

class Solution:
    def isPalindrome(self, s: str) -> bool:
        extracted_string = ''.join(filter(str.isalnum, s)).lower()
        return extracted_string == extracted_string[::-1]
