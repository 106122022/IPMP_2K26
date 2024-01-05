#include<bits\stdc++.h>
using namespace std;
int countbits(int m,int n){
    int cnt=0;
    while(m||n){
      
        if((m&1)!=(n&1))
        cnt++;
          m=m>>1;
        n=n>>1;
    }
    return cnt;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<countbits(m,n)<<endl;
}
