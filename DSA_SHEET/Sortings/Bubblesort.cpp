#include<bits\stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr){
    int n = arr.size();
    int flag=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){  //comparision for stable sort if it is greater than or equals to then unstable sort
                swap(arr[j],arr[j+1]);
                flag=0;
            }
            if(flag==1)
            break;
        }
    }
}
int main(){
    vector<int> vect = {64, 34, 25,7,99,100};
    bubblesort(vect);
    for(auto it:vect){
        cout<<it<<" ";
    }
}
