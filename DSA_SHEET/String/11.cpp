#include<bits\stdc++.h>
using namespace std;
int Check_Two_String_Equal(string s1,string s2){
    int i;
    for(i=0;i<s1.length()&&s2.length();i++){
        if(s1[i]==s2[i]||(s1[i]^32)==s2[i])
        continue;
        else break;
    }
    if(s1.length()==s2.length()&&i==s1.length())
    return 0;
    else if((int)s1[i]<(int)s2[i])
    return -1;
    return 0;

   

}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<Check_Two_String_Equal(s1,s2);
}
