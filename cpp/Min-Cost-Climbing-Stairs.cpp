// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/min-cost-climbing-stairs/description/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int top = cost.size();
        for (int i=2; i<top; i++){
            cost[i] = cost[i] + min(cost[i-1], cost[i-2]);
        }
        return min(cost[top-1], cost[top-2]);
    }
};
