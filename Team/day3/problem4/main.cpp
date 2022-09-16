#include<iostream>
#include<cstdio>
#include<cstring>
#define maxn 10010
#define mod 1000000007
using namespace std;

// No me dio tiempo de hacerlo :(
char s[maxn];
int n,k,f[maxn],ans,C[1010][1010];
int count(int x){
    int res=0;
    while(x){
        if(x&1)res++;
        x>>=1;
    }
    return res;
}
int make(int x){
    int op=0;
    while(x!=1){
        if(f[x]){return f[x]+op;}
        op++;
        x=count(x);
    }
    return op;
}
int main(){
    C[0][0]=1;
    for(int i=1;i<=1001;i++){
        C[i][0]=1;
        for(int j=1;j<=1001;j++){
            C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
        }
    }
    scanf("%s",s+1);
    n=strlen(s+1);
    scanf("%d",&k);
    if(k==0){
        puts("1");
        return 0;
    }
    for(int i=1;i<=1001;i++)
        f[i]=make(i);
    int num=0,ans=0;
    for(int i=1;i<=n;i++){
        if(s[i]=='0')continue;
        for(int j=max(num,1);j<n;j++){
            if(f[j]==k-1)
                ans=(ans+C[n-i][j-num])%mod;
        }
        num++;
    }
    if(k==1)ans=(ans-1+mod)%mod;
    if(f[num]==k-1)ans=(ans+1)%mod;
    printf("%d\n",ans);
}