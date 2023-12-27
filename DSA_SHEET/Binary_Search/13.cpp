#include <iostream>
using namespace std;

int find_first_one(int a[])
{
    int l = 0, r = 1;
    while (a[r] != 1)
    {
        l = r;
        r = r * 2;
    }
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == 1)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 11,1,1,1,1,1,1,1,1,1,1,1,1};
    int result = find_first_one(arr);
    cout << result << endl;

    return 0;
}
