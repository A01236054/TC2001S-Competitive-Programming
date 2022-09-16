#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
    int n;
    int check(int x){
        int l=1,r=sqrt(n)+1;
        while(l<=r){
            int mid=(l+r)/2;
            if(mid*(mid+1)==x) return 1;
            else if(mid*(mid+1)<x) l=mid+1;
            else r=mid-1;
        }
        return 0;
    }
    int main(){
        scanf("%d",&n);
        int flag=0;
        for(int i = 1; i <= sqrt(n*2); i++)
            if(check(2*n-i*(i+1))){
                flag=1;
                break;
            }
        if(!flag) printf("NO");
        else printf("YES");
    }
}