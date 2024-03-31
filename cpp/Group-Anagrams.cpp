// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;

        // For each string in strs
        for (auto x: strs){
            string curWord = x;
            // Sort the string
            sort(curWord.begin(), curWord.end());
            // If it's an anagram to another word it will be written to the same key here
            // the key contains a vector of string, so we push the unsorted string to the key of the map
            maps[curWord].push_back(x);
        }

        vector<vector<string>> out;
        // Loop through the map and pushout the vector containing strings to our output vector
        for (auto x: maps){
            out.push_back(x.second);
        }
        return out;
    }
};
