// https://leetcode.com/problems/put-marbles-in-bags/description/
class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<long long> valuePropositionOfCut;
        long long min_score = 0, max_score = 0;
            
        for (int i=0; i<weights.size()-1; i++){
            valuePropositionOfCut.push_back(weights[i]+weights[i+1]);
        }

        sort(valuePropositionOfCut.begin(), valuePropositionOfCut.end());

        for (int i = 0; i<(k-1); i++){
            min_score += valuePropositionOfCut[i];
        }
        for (int i = weights.size()-(k); i<weights.size()-1; i++){
            max_score += valuePropositionOfCut[i];
        }

        return max_score-min_score;
    }

};
