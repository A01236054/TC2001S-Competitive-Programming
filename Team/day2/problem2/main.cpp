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
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < values[i] - values[i + 3]; j++) {
            c /= 2 + i;
            res ++;
        }
        for (int j = 0; j < values[i + 3] - values[i]; j++) {
            d /= 2 + i;
            res++;
        }
    }
    for (int i = 0; i < values[2] - values[5]; i++) {
        c /= 5;
        res++;
    }
    for (int i = 0; i < values[5] - values[2]; i++) {
        d /= 5;
        res++;
    }
    if (c == d) {
        cout << res;
    }
    else {
        cout << -1;
    }
}