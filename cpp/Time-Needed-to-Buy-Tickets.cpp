// Written by Nicholas Ilow
// Solution to leetcode.com/problems/time-needed-to-buy-tickets

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int curPerson = 0;
        int count = 0;
        while (tickets[k]>0){
            curPerson = tickets[0];
            curPerson--;
            count++;
            tickets.erase(tickets.begin());
            if (curPerson != 0){
                tickets.push_back(curPerson);
            }
            else if (k==0){
                return count;
            }
            if (k==0){
                k = tickets.size()-1;
            }
            else{
                k--;
            }
        }
        return count;
    }
};
