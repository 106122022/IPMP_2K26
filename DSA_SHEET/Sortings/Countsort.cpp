#include<bits\stdc++.h>
using namespace std;
void countsort(vector<int>&arr){
    int n=arr.size();
    int maxi=*(max_element(arr.begin(),arr.end()));
    vector<int>m(maxi+1,0);
    for(auto it:arr){
        m[it]++;
    }
    for(int i=0;i<m.size();i++){
        if(m[i]==0)
        continue;
        while(m[i]--){
            cout<<i<<" ";   //any equal element may come first
        }
    }
}
int main(){
    vector<int> vect = {64, 34, 25,7,99,100};
   countsort(vect);
    
}
