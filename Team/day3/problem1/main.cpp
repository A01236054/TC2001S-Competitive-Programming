#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int sizeS = s.length();
        int pos = 0;
        int res = 1;
        vector<int> index;
        while (pos + 2 < sizeS) {
            string word = s.substr(pos, 3);
            int elim = 2;
            //cout << word <<  "  " << sizeS << endl;
            if (word == "one" || word == "two") {
                if (word == "one") {
                    if (pos + 3 < sizeS) {
                        if (s[pos + 3] == 'e') {
                            elim = 1;
                        } 
                    }
                } else if (word == "two") {
                    if (pos + 3 < sizeS) {
                        if (s[pos + 3] == 'o') {
                            elim = 1;
                        } 
                    }
                }
                index.push_back(pos + elim + res);
                res++;
                s.erase(pos + elim, 1);
                sizeS--;
                pos--;
            }
            pos++;
        }
        cout << res - 1 << endl;
        for (auto& element : index) {
            cout << element << " ";
        }
        cout << endl;
    }
}