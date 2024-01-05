#include<bits\stdc++.h>
using namespace std;
int clearrightmostset(int n){
    return n&(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<clearrightmostset(n);
}
