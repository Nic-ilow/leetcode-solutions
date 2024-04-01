// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/eliminate-maximum-number-of-monsters/

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int> time_to_city;
	// start n=1 because our gun is already charge and we instantly defeat the first monster
        int n = 1;
        
	// Create a vector containing the time until a monster reaches the city
        for (int i = 0; i<dist.size(); i++){
	    // Important we make one of the vals a double for the division, we ceil it to store it as an int since we deal in 1 minute increments due to our gun
            time_to_city.push_back(ceil((double)dist[i]/speed[i]));
        }
	
	// Sort the time vector so we know the order and timing of which monsters come
        sort(time_to_city.begin(), time_to_city.end());
        
        for (int i = 1; i<time_to_city.size(); i++){
	    // Each bullet takes 1 minute to fire, so it behaves the same as our index starting from 1 since we defeated the first monster
	    // Therefore if the 16th monster takes 15 minutes to get to the city
	    // we would have had to kill 16 monsters already which would have taken us 16 minutes so the monster reaches us and we lose
            if (i>=time_to_city[i]){
                return n;
            }
	    // If nothing reaches the city increase the counter of enemies killed
            n++;
        }
	// if we kill everything we also need to return n which will be the size of the dist vector
        return n;
    }
};
