#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string Run_Length_Encoding(string s) {
    int i=0;
    while(i<s.length()){
        int count=1;
        while(i<s.length()-1&&s[i]==s[i+1]){
            count++;
            i++;
        }
        
        cout<<s[i]<<count;
        i++;
    }
}

int main() {
    string s;
    cin >> s;
    Run_Length_Encoding(s) ;

    return 0;
}
