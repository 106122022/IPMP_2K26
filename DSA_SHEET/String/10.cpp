#include<bits/stdc++.h>
using namespace std;
char Find_First_Nonrepeating(string s){
    unordered_map<char,int>m(256);
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(m[s[i]]==1)
        return s[i];
    }
    return '$';
}
int main(){
    string s;
    cin>>s;
    cout<<Find_First_Nonrepeating(s);
}
