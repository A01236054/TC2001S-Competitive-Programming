#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
		
        int n = (int)s.length();
        for (int i = 0; i < n; i++) {
            s[i] -= '0';
        }

        int result = n;
        for (int a = 0; a < 10; a++) {
            for (int b = 0; b < 10; b++) {
                int res = 0;
                bool x = true;
                for (int i = 0; i < n; i++) {
                    if ((x && s[i] == a) || (!x && s[i] == b)) {
                        res++;
                        x = !x;
                    }
                }

				if(a == b) {
					result = min(result, n - res);
				}
				else {
					if (res % 2 != 0)
					res--;

					result = min(result, n - res);
				}
            }
		}
        cout << result << endl;
    }

    return 0;
}