#include <bits/stdc++.h>
using namespace std;

int check_majority(int a[], int size, int key)
{
    auto l = lower_bound(a, a + size, key);
    if (a[l - a] != key || (l - a) == size)
    {
        return -1; // element not present in array
    }
    auto u = upper_bound(a, a + size, key);
    if (a[u - a - 1] != key || (u - a - 1) == size)
    {
        return -1; // element not present in array
    }
    else
        return (u - a) - (l - a);
}
int main()
{
    int arr[] = {1, 1, 1, 2, 2};
    int c = check_majority(arr, 5, 1);
    if (c == -1)
        cout << false;
    else if (c < (5 / 2))
        cout << false;
    else
        cout << true;
}
