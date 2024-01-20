#include<bits\stdc++.h>
using namespace std;

//SLIDING WINDOW CONCEPT
int Find_Longest_Substring_NonRepeat(string s){
    int n = s.length();
    int i=0,j=0;
    unordered_map<char,int>m;
    int ans=1;
    while(j<s.length()){
        m[s[j]]++;
        if(m[s[j]]==2){
            while(m[s[j]]==2){
                m[s[i]]--;
                i++;
            }
        }ans=max(ans,j-i+1);
        j++;
        
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<Find_Longest_Substring_NonRepeat(s);
}
