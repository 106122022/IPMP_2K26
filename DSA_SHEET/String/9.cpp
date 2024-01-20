#include <bits/stdc++.h>
using namespace std;
 string atoifun(string s){
    string st="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9')
        st+=s[i];
    }
    return st;
 }
 int main(){
    string s;
    cin>>s;
    cout<<atoifun(s);
 }
