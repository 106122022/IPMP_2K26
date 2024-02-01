#include<bits\stdc++.h>
using namespace std;
void selectionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){  //comparision for stable sort if it is greater than or equals to then unstable sort
               mini=j;
            }
        }
        if(mini!=i){
            swap(arr[i],arr[mini]);
        }
    }
}
int main(){
    vector<int> vect = {64, 34, 25,7,99,100};
    selectionsort(vect);
    for(auto it:vect){
        cout<<it<<" ";
    }
}
