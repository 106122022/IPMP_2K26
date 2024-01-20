#include <bits/stdc++.h>
using namespace std;
//. *
class Solution {
public:
    int checkutil(string &s, string &p, int i, int j, vector<vector<int>> &dp) {
        if (i == s.length() && j == p.length())
            return 1;
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int charmatch = (i < s.length()) && (s[i] == p[j] || p[j] == '.');
        if (j + 1 < p.length() && p[j + 1] == '*') {
            return dp[i][j] = checkutil(s, p, i, j + 2, dp) || (charmatch && checkutil(s, p, i + 1, j, dp));
        } else {
            return dp[i][j] = charmatch && checkutil(s, p, i + 1, j + 1, dp);
        }
    }
    bool isMatch(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return checkutil(s, p, 0, 0, dp);
    }
};
