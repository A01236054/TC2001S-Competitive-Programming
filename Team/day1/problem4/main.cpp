#include <iostream>

using namespace std;

const int N = 200005;
int matrix[N][26];

int main(){
    int i, j, b;
    string s;
    cin >> s >> b;
    int n = s.length();
    s = '#' + s;
    for(i = 1; i <= n; i++){
        matrix[i][s[i] - 'a']++;
        for(j = 0; j < 26; j++){
            matrix[i][j] += matrix[i-1][j];
        }
    }
    auto check = [&] (int x, int y) {
        int count = 0;
        for(i = 0; i < 26; i++){
            if(matrix[x-1][i] != matrix[y][i]) count++;
        }
        return count;
    };
    while(b--){
        int l, r; 
        cin >> l >> r;
        if(l == r || s[l] != s[r] || check(l, r) >= 3){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}