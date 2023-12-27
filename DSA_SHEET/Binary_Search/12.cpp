#include <bits\stdc++.h>
using namespace std;
class solution
{
public:
    int findmin(int a[], int size)
    {
        int l = 0, r = size - 1;
        if (a[l] < a[r])
        {
            return a[l];
        }
        while (r - l > 1)
        {
            int m = l + ((r - l) / 2);
            if (a[m] > a[r])
                l = m;
            else
                r = m;
        }

        return a[l + 1];
    }
};
