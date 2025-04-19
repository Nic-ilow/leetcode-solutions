// https://leetcode.com/problems/check-if-grid-can-be-cut-into-sections/description/
class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        for (int i=0; i<=1; i++){
            if (i)
                std::sort(rectangles.begin(), rectangles.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
                    return a[1] < b[1]; // Sorting by second element
                });
            else sort(rectangles.begin(), rectangles.end());
            int maxV = -1;
            int count = rectangles.size();
    
            for (int j=0; j<rectangles.size(); j++){
                if (rectangles[j][i] < maxV) count--;
                maxV = max(maxV, rectangles[j][2+i]);
            } 
            if (count > 2) return true;
        }
        return false;
    }
};
