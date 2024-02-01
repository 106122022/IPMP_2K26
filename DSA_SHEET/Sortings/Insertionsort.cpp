#include<bits\stdc++.h>
using namespace std;
void insertionsort(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector<int> vect = {64, 34, 25,7,99,100};
    insertionsort(vect);
    for(auto it:vect){
        cout<<it<<" ";
    }
}
