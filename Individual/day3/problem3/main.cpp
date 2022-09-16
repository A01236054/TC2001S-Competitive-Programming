#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    while (n --) {
        res += 4 * n;
    }
    cout << res + 1;
}