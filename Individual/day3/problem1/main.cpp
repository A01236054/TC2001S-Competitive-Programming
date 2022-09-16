#include <iostream>

using namespace std;

void merge() {

}

int main() {
    int n, firstNum, number;
    cin >> n;
    int ans = 1;
    int max = 1;
    cin >> firstNum;
    while (--n) {
        cin >> number;
        if (number > firstNum) max++;
        else {
            if (ans < max) ans = max;
            max = 1;
        }
        firstNum = number;
    }
    if (ans < max) ans = max;
    cout << ans;
}