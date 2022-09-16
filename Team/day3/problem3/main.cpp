#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k, min;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 2) {
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            if ( (i % 2 == 0 && s[i] == 'B') || (i % 2 == 1 && s[i] == 'A') ) {
                a++;
            }
            else if ( (i % 2 == 0 && s[i] == 'A') || (i % 2 == 1 && s[i] == 'B') ) {
                b++;
            }   
        }
        min = a < b ? a : b;
        cout << min << endl;
        for (int i = 0; i < n; i++) {
            if (min == a) {
                if (!(i & 1)) {
                    cout << 'A';
                }
                else {
                    cout << 'B';
                }
            }
            else {
                if (i & 1) {
                    cout << 'A';
                }
                else {
                    cout << 'B';
                }
            }
        }
    }
    else{
		int ans = 0;
		s[n] = '0';
		for (int i = 1; i < n; i++) {
			if (s[i] == s[i - 1]) {
                for (int j = 'A'; j <= 'A' + k - 1; j++) {
                    if (j != s[i] && j != s[i + 1]) {
                        ans++;
                        s[i] = j;
                        break;
                    }
                }
            }
		}
		cout << ans << endl;
		for(int j = 0; j <= n - 1; j++) {
			cout << s[j];
		}
    }
}