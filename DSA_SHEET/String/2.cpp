 #include<bits/stdc++.h>
 using namespace std;
void findall_permutations(string s,vector<char>&ds,int freq[]){
    if(ds.size()==s.length()){
        for(auto it:ds){
            cout<<it;
            
        }
        cout<<endl;
    }
    for(int i=0;i<s.length();i++){
        if(!freq[i]){
            ds.push_back(s[i]);
            freq[i]=1;
            findall_permutations(s,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
int main(){
    string s;
    cout<<"enter your string"<<" ";
    cin>>s;
    vector<char> ds;
    int freq[s.length()];
    for(int i=0;i<s.length();i++)
    freq[i]=0;
    findall_permutations(s,ds,freq);
}
