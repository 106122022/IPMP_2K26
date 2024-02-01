#include<bits\stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    int l=low;
    int r=mid+1;
    vector<int>v;
    while(l<=mid&&r<=high){
        if(arr[l]>=arr[r]){  //if elements are qual you take it from first subarray
            v.push_back(arr[r]);
            r++;
        }
        if(arr[l]<arr[r]){
            v.push_back(arr[l]);
            l++;
        }
    }
    while(l<=mid){
        v.push_back(arr[l++]);
    }
    while(r<=high){
        v.push_back(arr[r++]);
    }
    for(int i=high;i>=low;i--){
        arr[i]=v.back();
        v.pop_back();
    }

}
void mergesort(vector<int>&arr,int low,int high){
    if(low>=high)
    return ;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    vector<int> vect = {64, 34, 25,7,99,100};
    mergesort(vect,0,vect.size()-1);
    for(auto it:vect){
        cout<<it<<" ";
    }
}
