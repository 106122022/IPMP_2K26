#include<bits\stdc++.h>
using namespace std;
int countsetbits(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
//__biultin_popcount(n)
int main(){
    int n;
    cin>>n;
    cout<<countsetbits(n);
}
