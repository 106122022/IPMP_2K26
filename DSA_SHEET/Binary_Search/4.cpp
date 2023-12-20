#include<bits/stdc++.h>
using namespace std;
int floorr(int a[],int size,int key){
    int l=0, r=size-1;
    while (l<=r) {
        int mid=l+(r-l)/2;
        if(a[mid]<=key)
        l=mid+1;
        else 
        r=mid-1;
    }
    return r;
}
int ceilll(int a[],int size,int key){
    int l=0, r=size-1;
    while (l<=r) {
        int mid=l+(r-l)/2;
        if(a[mid]>key)
        r=mid-1;
        else 
        l=mid+1;
    }
    return l;
}
int main(){
    int a[]={3,5,6,7,8,99,100,341,444,690,789,890,901,10001};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<a[floorr(a,n,2)]<<endl;
    cout<<a[ceilll(a,n,1001)]<<endl;
}

