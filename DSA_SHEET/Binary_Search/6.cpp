#include<bits/stdc++.h>
using namespace std;
int count(int a[],int size,int val){
    int l=lower_bound(a,a+size,val)-a;
    if(l>size||a[l]!=val){
        return -1;
    }
    int u=upper_bound(a,a+size,val)-a;
    if(a[u-1]!=val){
        return -1;
    }
    return u-l;
    

}
int main(){
    int a[]={2,2,2,5,6,7,8,8};
   cout<<count(a,8,4);
}
