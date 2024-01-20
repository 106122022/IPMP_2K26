    #include <bits/stdc++.h>
    using namespace std;
    int Pattern_Finding(string &s, string &p)
    {
        string st;
        int i = 0, j = 0,sti=-1;
        unordered_map<char, int> m(256), m1(256);
        for (auto ch : p)
        {
            m[ch]++;
        }
        int count = 0;
        while (j < s.length())
        {
            m1[s[j]]++;
            if (m.find(s[j]) != m.end() && m1[s[j]] <= m[s[j]])
            {
                count++;
            }
            if (m.find(s[j]) == m.end())
            {
                count = 0;
                while (i <= j)
                {
                    m1[s[i]]--;
                    i++;
                }
                
            }
            if (count == p.length())
            {
                st = s.substr(i, j - i + 1);
                if (st != p)
                {
                    while (i <= j)
                    {
                        m1[s[i]]--;
                        i++;
                    }
                    
                    
                }
                else{
                    sti=i;
                    return sti;
                }
                
            }
            j++;
        }
        return -1;
        

    }
    int main(){
        string s;
        getline(cin,s);
        string p;
        getline(cin,p);
        cout<<Pattern_Finding(s,p);


    }
