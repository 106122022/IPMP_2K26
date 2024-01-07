#include <bits\stdc++.h>
using namespace std;
char find_nonrepeatingchar(string s)
{
        unordered_map<char, int> m;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            m[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]] == 1)
                return s[i];
        }
        return '$';
    }

int main()
{
    string s;
    cin >> s;
    cout << find_nonrepeatingchar(s);
}
