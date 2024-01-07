#include <bits\stdc++.h>
using namespace std;
void printduplictescount(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second > 1 && i->first != ' ')
            cout << i->first << " " << i->second << endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    printduplictescount(s);
}
