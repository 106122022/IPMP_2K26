#include<bits\stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
string smallestWindow(string s, string p)
{
    unordered_map<char, int> m1(256), m2(256);
    if (s.length() < p.length())
        return "-1";
    for (int i = 0; i < p.length(); i++)
    {
        m2[p[i]]++;
    }
    int count = 0;
    int i = 0, j = 0;
    int len = INT_MAX;
    int st = -1;
    while (j < s.length())
    {
        m1[s[j]]++;
        if (m2.find(s[j]) != m2.end() && m2[s[j]] >= m1[s[j]])
        {
            count++;
        }

        while (count == p.length())
        {
            if (len > j - i + 1)
            {
                st = i;
                len = j - i + 1;
            }
            m1[s[i]]--;

            if (m2.find(s[i]) != m2.end() && m1[s[i]] < m2[s[i]])
            {
                count--;
            }
            i++;
        }

        j++;
    }
    if(len==INT_MAX)
    return "-1";
    return s.substr(st,len);
}
};
