#include<bits\stdc++.h>
using namespace std;
string Delete_Occurences(string s1,string s2){
    int n=s1.length();
     unordered_map<char,int>m(26);
     for(int i=0;i<s2.length();i++){
        m[s2[i]]++;//if its not lower convert by using tolower(s[i])
     }
     int a=0;
     for(int i=0;i<n;i++){
        if(m[s1[i]]==0){
            s1[a++]=s1[i];
        }
     }
     for(int i=a;i<s1.length();i++){
     s1[i]='\0';}
     return s1;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<Delete_Occurences(s1,s2)<<endl;
}
