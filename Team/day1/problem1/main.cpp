#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    string res = "";
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int sizeS = s.length();
        string wordRes = "";
        
        int j = 1;
        while (j < sizeS) {
            if (s[j - 1] != s[j]) {
                if (wordRes.find(s[j - 1]) == std::string::npos) {
                    wordRes += s[j - 1];
                }
                j -= 1;
            }
            j += 2;
        }
        if (sizeS - j == 0 && wordRes.find(s[j - 1]) == std::string::npos) {
            wordRes += s[j - 1];
        }
        sort(wordRes.begin(), wordRes.end());
        res += wordRes + "\n";
    }
    cout << res;
}