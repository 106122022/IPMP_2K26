#include<bits\stdc++.h>
using namespace std;
int findabs(int n){
    int mask=n >> (sizeof(int) *31);//if nos -ve mask contains all 1's if +ve maska contains all 0's
    return (mask+n)^mask;

}
int main(){
    int n;
    cin>>n;
    cout<<findabs(n);
}
