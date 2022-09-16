#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) { // until t = 0
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
                bool boolean = true;
                for (int i = 0; i < n; i++) {
                    if ((boolean && s[i] == a) || (!boolean && s[i] == b)) { // counts digits from 0 to 9
                        res++;
                        boolean = !boolean;
                    }
                }
				if(a == b) { // doubles
					result = std::min(result, n - res); // determines minimum of all chains
				}
				else { // singles
					if (res % 2 != 0) { // checks if odd
                        res--; // sustracts middle value 
                    }
                    result = std::min(result, n - res); // determines minimum of all chains
                    
				}
            }
		}
        cout << result << endl;
    }
    return 0;
}