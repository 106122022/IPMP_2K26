#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int l, int r, int key)
{
    int mid = l + (r - l) / 2; // overflow case
    while (l < r)
    {
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
// by reducing the number of comparisions
int binary_search_optimized(int a[], int l, int r, int key)
{
    int flag = 0;
    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] <= key)
            l = mid;
        else
            r = mid;
    }
    if (a[l] == key)
        return l;
    if (a[r] == key)
        return r;
    else
        return -1;
}
int lowerbound(int a[], int l, int r, int key)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] >= key)
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
int upperbound(int a[], int l, int r, int key)
{

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] > key)
        {

            r = mid - 1;
        }

        else
            l = mid + 1;
    }
    return l;
}
// CEIL IS LOWER_BOUND BUR NOT FLOOR IN CASE OF LOWER_BOUND MOVING RIGHT BUT IN FLOOR JUST OPPOSITE
int floorr(int a[], int l, int r, int key)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] <= key)
        {

            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }
    return r;
}
int countoccurences(int a[], int key, int size)
{
    int l = lowerbound(a, 0, size - 1, key);
    int r = upperbound(a, 0, size - 1, key);
    if (a[l] == key && a[r] == key)
        return r - l + 1;
    return 0;
}
int minimumindex_rotatedarray(int a[], int size)
{
    int l = 0, r = size - 1;
    if (a[l] < a[r])
    {
        return 0;
    }
    while (r - l > 1)
    {
        int m = l + ((r - l) / 2);
        if (a[m] > a[r])
            l = m;
        else
            r = m;
    }

    return l + 1;
}
int main()
{
    int a[] = {5, 6, 9, 10, 1, 2, 3};
    cout << minimumindex_rotatedarray(a, 7) << endl;
    int b[] = {3, 4, 5, 7, 8, 9, 10};
    cout << floorr(b, 0, 6, 6);
}
