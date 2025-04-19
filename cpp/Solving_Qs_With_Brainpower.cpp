// https://leetcode.com/problems/solving-questions-with-brainpower/description/
class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        const int n = questions.size();
        long long score[1000000] = {};
        for (int i = n-1; i >= 0; --i){
            score[i] = max(questions[i][0] + score[i + questions[i][1] + 1], score[i+1]);
        }

        return score[0];
        
    }
};
