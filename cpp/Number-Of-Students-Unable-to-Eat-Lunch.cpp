// Written by Nicholas Ilow
// Solution to leetcode.com/problems/number-of-students-unable-to-eat-lunch/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int counter = 0;

        while (counter<students.size()){

            if (students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                counter = 0;
            }

            else {
                students.push_back(students[0]);
                students.erase(students.begin());
                counter++;
            }
        }
        return counter;
    }
};
