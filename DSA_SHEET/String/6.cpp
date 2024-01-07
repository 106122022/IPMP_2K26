#include <bits/stdc++.h>
using namespace std;
string moveevenindex(string &s){
   string  str="";
    for(int i=1;i<s.length();i+=2){
        str+=s[i];
    }
    for(int i=0;i<s.length();i+=2){
        str+=s[i];
    }
    return str;

}
int main(){
    string s;
    cin>>s;
    cout<<moveevenindex(s)<<endl;
}
