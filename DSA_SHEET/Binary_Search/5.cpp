#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> printUnsorted(int a[], int n) {
        int i;
        for (i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1])
                break;
        }
        int j;
        for (j = n - 1; j > 0; j--) {
            if (a[j] < a[j - 1])
                break;
        }
        if(i==n-1)
        return {0,0};
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int k=i;k<=j;k++){
            if(a[k]>maxi)
            maxi=a[k];
            if(a[k]<mini)
            mini=a[k];
        }
        int m, r;
        for (r = 0; r < i; r++) {
            if (a[r] > mini)
                break;
        }
        for (m = n-1; m >=j ; m--) {
            if (a[m] < maxi)
                break;
        }

        return {r, m};
    }
};
