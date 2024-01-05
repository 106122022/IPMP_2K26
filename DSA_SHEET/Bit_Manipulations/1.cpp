#include<bits\stdc++.h>
using namespace std;
bool isPowerofTwo(long long n){
    if(n==0)
    return false;
    return !(n&(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerofTwo(n); 
}
