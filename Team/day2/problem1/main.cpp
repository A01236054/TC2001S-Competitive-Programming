#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, bet;
    set<int> a;
    cin >> n;
    while (n--) {
        cin >> bet;
        while(bet % 3 == 0) bet /= 3;
        while(bet % 2 == 0) bet /= 2;
        a.insert(bet);
    }
    if (a.size() == 1) cout << "YES";
    else cout << "NO";
}