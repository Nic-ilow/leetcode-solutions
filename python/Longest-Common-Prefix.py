# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/longest-common-prefix/description/

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        output = ''
        lengths = []
        
        if len(strs) == 1:
            return strs[0]
        
        for i in range(len(strs)):
            lengths.append(len(strs[i]))
        min_length = min(lengths)

        for i in range(min_length):
            a = strs[0][i]
            for y in range(1,len(strs)):
                if strs[y][i] == a:
                    continue
                else:
                    return output
            output+=a

        return output
