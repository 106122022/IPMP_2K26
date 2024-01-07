#include<bits/stdc++.h>
using namespace std;

string reverse(string &s, int l, int r) {
    if (l >= r)
        return s;
    swap(s[l], s[r]);
    return reverse(s, ++l, --r);
}

int main() {
    string s;
    cin >> s;
    cout << reverse(s, 0, s.length() - 1);
    return 0;
}
