// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()){
            return -1;
        }
        else {
            int nSize = needle.size();

            for (int i=0; i<=(haystack.size() - nSize); i++){
                if (needle == haystack.substr(i,nSize)){
                    return i;
                }
            }
        }
        return -1;
    }
};
