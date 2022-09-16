#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    int from = 0;
    int position = 0;
    int moves = 0;
    int anteriorMoves = -1;
    while (anteriorMoves != moves) {
        anteriorMoves = moves;
        position += d;
        if (position >= n - 1) {
            position = n - 1;
        }
        while (position > from) {
            if (s[position] == '1') {
                moves++;
                from = position;
                break;
            }
            position--;
        }
    }
    if (from != n - 1) cout << -1;
    else cout << moves;
}