// Written by Nicholas Ilow
// Solution to https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/


class Solution {
public:
    // Fast solution, more code
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxLeft = 0;
        int maxRight = 0;

        if (left.size()){
            maxLeft = left.front();
            for (int leftIdx = 0; leftIdx<(left.size()); leftIdx++){
                maxLeft = max(maxLeft, left[leftIdx]);
            }
        }
        if (right.size()){
            maxRight = right.front();
            for (int rightIdx = 0; rightIdx<(right.size()); rightIdx++){
                maxRight = min(maxRight, right[rightIdx]);
            }
            maxRight = (n - maxRight);
        }

        return max(maxRight, maxLeft);
    }

    // Simpler to read and understand but slower because of sort
    int getLastMomentSort(int n, vector<int>& left, vector<int>& right) {
	int maxLeft = 0;
	int maxRight = 0;

	if (left.size()){
	    sort(left.begin(), left.end());
	    maxLeft = left.back();
	}

	if (right.size()){
	    sort(right.begin(), right.end());
	    maxRight = (n - right.front());
	}

	return max(maxRight, maxLeft);
    }

};

