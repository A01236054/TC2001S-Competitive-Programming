#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n, m, a, r;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int numExp = n + 1;
        vector<int> nums;
        while (n--) { 
            cin >> a;
            nums.push_back(a);
        }

        float p;
        double sumContraryP = 1;
        // Determine until what index is necessary to sort   
        int indexSort = 0;
        while (numExp-- > 2) {
            if (numExp != nums[numExp - 1]) {
                indexSort = numExp;
                break;
            }
        }

        while (m--) {
            cin >> r >> p;
            if (r >= indexSort) {
                sumContraryP *= 1 - p; 
            }
        }

        if (indexSort == 0) {
            cout << 1 << endl;
        } 
        else {
            cout << 1 - sumContraryP << endl;
        }
    }
}