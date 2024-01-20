#include<bits\stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    unordered_map<char,int>m(256);
    for(auto c:s1) m[c]++;
    for(auto ch:s2){
        if(!m[ch]){
            cout<<"No";
            return 0;
        }
        else{
            m[ch]--;
        }
    }
    cout<<"YES";

}
