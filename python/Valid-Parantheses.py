# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/valid-parentheses/description/

class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for c in s:
            if c == '(' or c=='{' or c=='[':
                st.append(c)
            else:
                if not st or (st[-1] == '(' and c != ')') or (st[-1] == '[' and c != ']') or (st[-1] == '{' and c != '}'):
                    return False
                st.pop()
        return not st
        
