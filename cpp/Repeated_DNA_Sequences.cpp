// https://leetcode.com/problems/repeated-dna-sequences/description/
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int start = 0;
        unordered_map<string, int> sequences;
        for (int end = 9; end < s.length(); end ++){
            sequences[s.substr(start, end - start + 1)]++;
            start++;
        }

        vector<string> out;
        for(auto it : sequences){
            if(it.second > 1){
                out.push_back(it.first);
            }
        }
        return out;
    }
};
