// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;

        // loop over the string (in hindsight starting i from the end of the string would have been easier)
        for (int i=0; i<s.size(); i++){

            // if we have a space
            if (s[i] == ' '){

                // iterate until the next time we have a non-space
                for (int j = i+1; j<s.size(); j++){

                    // if we have a non-space
                    if (s[j] != ' '){

                        // update i to the new index (start of next word)
                        i = j;
                        // set the counter to one since when we break we won't enter the else and do counter++
                        counter = 1;
                        // break to continue searching the string
                        break;
                    }
                }
            }
            else{
                counter++;
            }
        }
        return counter;
    }
};
