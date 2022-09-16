#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    
    int n, k, u, v;
    cin >> n >> k;
    vector< vector <int> > roads(n);
    while (--n) {
        cin >> u >> v;
        roads[u].push_back(v);
        roads[v].push_back(u);
    }
    
}