#include <iostream>
#include <vector>
#include <string>
using namespace std;
 // 100120013
void countSideDigits(string s, vector<int> & side, int start, int end) {
    for (int i = start; i < end; i++) {
        side[s[i]] = side[s[i]] + 1;
        cout << side[s[i]] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) { 
        string s;
        cin >> s;
        int sLength = s.length();
        vector<int> left(10, 0);
        vector<int> right(10, 0);

        countSideDigits(s, left, 0, sLength / 2);
        if (sLength % 2 == 1) { // if only 1 char - validate
            countSideDigits(s, right, sLength / 2 + 1, sLength);
        } 
        else {
            countSideDigits(s, right, sLength / 2, sLength);
        }
        for (int j = 0; j < 10; j++) { // Determine number of digits to eliminate on each side
            cout << right[j] << " " << left[j] << endl;
            if (right[j] > left[j]) {
                right[j] -= left[j];
                left[j] = 0;
            } 
            else {
                left[j] -= right[j];
                right[j] = 0;
            }
        }
        int totalEliminations = 0;
        string leftString = "", rightString = "";
        // Eliminate invalid numbers of each side (the ones that are greater on one side)
        for (int j = 0; j < sLength; j++) { 
            if (s[j] != s[sLength - j]) { 
                if (left[s[j]] > 0) { // Eliminate number
                    left[s[j]] -= 1;
                    totalEliminations++;
                } 
                else { // Mantain number
                    leftString += s[j];
                }
                if (right[s[sLength - j]] > 0) { // Eliminate number
                    right[s[sLength - j]] -= 1;
                    totalEliminations++;
                } 
                else { // Mantain number
                   rightString = s[sLength - j] + rightString;
                }
            }
        }
        cout << leftString << rightString;
        string newS = leftString + rightString;
        cout << endl << newS;
        // Goes with the max number
        /*for (int j = 0; j < newS.length(); j++) {
            if (newS[j] != newS[sLength - j]) { 

            }
        }*/

    }
}