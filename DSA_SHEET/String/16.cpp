#include <bits/stdc++.h>
using namespace std;

string Remove_Duplicates(string s) {
    string st = "";
    int i = 0;
    while (i < s.length()) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            while (i < s.length() - 1 && s[i] == s[i + 1]) {
                i++;
            }
        } else  {
            st += s[i];
        }
        i++;
    }
    if (st == s) {    //base case at middle of code 
        return st;
    }
    return Remove_Duplicates(st);
}

int main() {
    string s;
    cin >> s;
    cout << Remove_Duplicates(s);
    return 0;
}
