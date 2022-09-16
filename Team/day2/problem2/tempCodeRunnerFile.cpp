#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "0";
        return 0;
    }
    int values[6] = {0, 0, 0, 0, 0, 0};
    int c = a, d = b;
    int res = 0;
    while (a % 2 == 0) {
        values[0]++;
        a /= 2;
    }
    while (a % 3 == 0) {
        values[1]++;
        a /= 3;
    }
    while (a % 5 == 0) {
        values[2]++;
        a /= 5;
    }
    while (b % 2 == 0) {
        values[3]++;
        b /= 2;
    }
    while (b % 3 == 0) {
        values[4]++;
        b /= 3;
    }
    while (b % 5 == 0) {
        values[5]++;
        b /= 5;
    }
    for (int i = 0; i < 3; i++) {
        res += abs(values[i] - values[i + 3]);
    }
    if (c == d) {
        cout << res;
    }
    else {
        cout << -1;
    }
}