// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/valid-parenthesis-string

class Solution {
public:
    bool checkValidString(string s) {
        // leftMin will keep track of the minimum number of open left parantheses
        // leftMax will keep track of the max number of open left parantheses we can add
        int leftMin = 0;
        int leftMax = 0;

        for (int i=0; i<s.size(); i++){
            if (s[i] == '('){
                leftMin++;
                leftMax++;
            }
            else if (s[i] == ')'){
                leftMin--;
                leftMax--;
            }
            else {
                // Asterisks could be used to close an open parantheses so we decrement min
                leftMin--;
                // It could also be used to open a new paranthese so we increment max
                leftMax++;
            }
            if (leftMin<0){
                // Cant have less than 0 open parantheses so set to 0
                leftMin = 0;
            }
            if (leftMax<0){
                // This would mean we have closed more than we have opened -> Invalid
                return false;
            }
        }
        if (leftMin==0){
            return true;
        }
        return false;
    }
};
