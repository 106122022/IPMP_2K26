#include <bits/stdc++.h>
using namespace std;
int findmaxindexinmountain(int a[], int size)
{
    class Solution
    {
    public:
        int peakIndexInMountainArray(vector<int> &a)
        {
            int l = 1, r = a.size() - 2;
            int ans, n = a.size();
            if (a[0] > a[1])
                return 0;
            if (a[n - 1] > a[n - 1])
                return n - 1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
                {
                    return mid;
                }
                else if (a[mid] > a[mid - 1])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            return -1;
        }
    };
}
int main()
{
    int a[] = {120, 100, 80, 20, 0};
    cout << a[findmaxindexinmountain(a, 5)];
}
