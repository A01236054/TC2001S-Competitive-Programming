#include <iostream>
using namespace std;

int main() {
    int l, r, q;
    cin >> q;
    while (q--) {
        cin >> l >> r;
        if (l % 2 == 0 && r % 2 == 0) {
            cout << ((l - r) / 2 + r);
        }
        else if (l % 2 == 1 && r % 2 == 1) {
            cout << ((l - r) / 2 + r) * -1;
        }
        else if (l % 2 == 0 && r % 2 == 1) {
            cout << (r - l + 1) / 2 * -1;
        }
        else {
            cout << (r - l + 1) / 2;
        }
        cout << endl;
    }
}