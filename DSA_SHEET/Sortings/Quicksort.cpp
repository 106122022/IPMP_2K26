#include<bits\stdc++.h>
using namespace std;
int quicksort_helper(vector<int>&arr,int low,int high){
    int count=0;
    int pivot=arr[low];
    for(int i=low+1;i<=high;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pi=low+count;
    swap(arr[low],arr[pi]);
    int i=low,j=high;
    while(i<pi&&j>pi){
        while(arr[i]<=pivot&&i<pi){//here if the element is same just simply keeping infront of pivot index
            i++;
        }
        while(arr[j]>pivot&&j>pi){
            j--;
        }
        if(i<pi){
            swap(arr[i],arr[j]);
        }
    }
    return pi;
}
void quicksort(vector<int>&arr,int low,int high){
    if (low < high) {
        int par=quicksort_helper(arr,low,high);
      quicksort(arr,low,par-1);
      quicksort(arr,par+1,high);
        
    }
}

int main(){
    vector<int> vect = {64, 34, 25,7,99,100};
    quicksort(vect,0,vect.size()-1);
    for(auto it:vect){
        cout<<it<<" ";
    }
}
