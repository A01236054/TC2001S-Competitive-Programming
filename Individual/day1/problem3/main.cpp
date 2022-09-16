#include <iostream> 
#include <math.h> 
#define ll long long
using namespace std;

int main() {
    ll vertices, edges;
    cin >> vertices >> edges;
    ll min = 0, max = vertices;
    if (edges * 2 < vertices) min = vertices - edges * 2;
    int nodes = 1;
    if (edges != 0) vertices--;
    while (edges > 0) {
        nodes++;
        if (edges - nodes + 1 < 0 || vertices == 1) {
            vertices--;
            break;
        } else {
            edges -= nodes - 1;
            vertices--;
        }
    }
    cout << min << " " << vertices; 
}