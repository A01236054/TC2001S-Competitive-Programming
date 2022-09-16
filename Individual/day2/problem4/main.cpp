#include <iostream> 
#include <cmath> 
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

const int maxn = 1e5 + 10;
bool vis[maxn];
int pri[maxn];
int num = 0;
int w[502][502];
int a[502];
int b[502];

void prime(){
    memset(vis,false,sizeof(vis));
    for(int i = 2; i < maxn; ++i){
        if(!vis[i]) pri[num++] = i;
        for(int j = 0; j < num && i * pri[j] < maxn; ++j){
            vis[i * pri[j]] = true;
            if( i % pri[j] == 0) break;
        }
    }
    vis[1] = vis[0] =true;
}

int main(){
    int n, m;
    prime();
    scanf("%d %d", &n, &m);
    bool flag = false;
    for(int  i = 1; i <= n; ++i)
    for(int  j = 1; j <= m; ++j){
        scanf("%d", &w[i][j]);
        if(vis[w[i][j]]){
            int t = lower_bound(pri,pri+num,w[i][j]) - pri;
            a[i] += pri[t] - w[i][j];
            b[j] += pri[t] - w[i][j];
        }
    }sort(a+1,a+1+n);
   sort(b+1,b+1+m);
   int ans= min(a[1],b[1]);
   printf("%d\n",ans);
}
// No me dio tiempo :(