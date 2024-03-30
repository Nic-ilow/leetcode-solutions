# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []

        out = []
        mappings = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }

        def backtrack(combi, next):
            if not next:
                out.append(combi)
                return

            for char in mappings[next[0]]:
                backtrack(combi + char, next[1:])

        backtrack("", digits)
        return out

