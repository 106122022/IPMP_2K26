#include <bits/stdc++.h>
using namespace std;
int findfixedpoint(vector<int> &v)
{
    int n = v.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid == v[mid])
            return mid;
        else if (mid > v[mid])
        {
            if (v[mid] <= 0)
                l = mid + 1;
            else
            {
                r = mid - 1;
            }
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {10, -5, 3, 4, 7, 9};
    cout << findfixedpoint(v);
}
