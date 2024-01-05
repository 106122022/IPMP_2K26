#include<bits\stdc++.h>
using namespace std;
int finddirstset(int n){
    int count=0;
    if(n==0)
    return 0;
    while(n){
        if(n&1==1){
        count++;
        return count;}
        count++;
        n=n>>1;
    }
}
int main(){
    int n;
    cin>>n;
   cout<< finddirstset(n);
}
