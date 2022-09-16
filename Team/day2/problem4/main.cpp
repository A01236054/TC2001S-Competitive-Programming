#include <iostream>
#include <cmath>
#define LL long long

int mod = 1000000007;

using namespace std;

LL quick_mod(LL a, LL b)
{
    LL ans = 1;
    while(b) {
        if (b&1) { 
            ans = (ans*a) % mod;
        } 
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    LL ans = quick_mod(27, n);
    LL ret = quick_mod(7, n);
    ret = (ans % mod - ret % mod + mod) % mod; // sustract mod
    cout << ret;
}
