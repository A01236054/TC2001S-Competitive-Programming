#include <iostream>
#include <string>
using namespace std;


int main() {
    int t, n, k;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        cin >> s;
        int ceros = k;   
        int res = 0;
        for(int j = 0; j < n; j++) {
            if (s[j] == '0') {
                ceros++;
                if (ceros == 2 * k + 1) {
                    res++; 
                    ceros = k;     
                } else if (j == n - 1 && ceros >= k + 1) {
                    res++;
                }
            }
            else { 
                ceros = 0;
            }
        }
        cout << res << endl;
    }
}