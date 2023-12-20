#include <bits/stdc++.h>
using namespace std;
// not for duplicates
int findindex_rotatedarray(int a[], int size, int key)
{
    int l = 0, r = size - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == key)
            return m;
        else if (a[l] <= a[m])
        {
            if (key >= a[l] && key < a[m])
                r = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (key > a[m] && key <= a[r])
                l = m + 1;
            else
                r = m - 1;
        }
    }
    return -1;
}
// even for duplicates
int findindex_rotatedarraydup(int a[], int size, int key)
{
    int l = 0, r = size - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == key)
            return m;
        if (a[l] == a[m] == a[r])
        {
            l = l + 1;
            r = r - 1;
        }
        else if (a[l] <= a[m])
        {
            if (key >= a[l] && key < a[m])
                r = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (key > a[m] && key <= a[r])
                l = m + 1;
            else
                r = m - 1;
        }
    }
    return -1;
}

// space complexity O(logN) TC O(logN)
int recursive_approach_rotatedsortedarray(int a[], int l, int r, int key)
{
    if (l > r)
        return -1;
    int mid = l + (r - l) / 2;
    if (a[mid] == key)
        return mid;
    else if (a[l] <= a[mid])
    {
        if (key >= a[l] && key < a[mid])
        {
            recursive_approach_rotatedsortedarray(a, l, mid - 1, key);
        }
        else
            recursive_approach_rotatedsortedarray(a, mid + 1, r, key);
    }
    else
    {
        if (key > a[mid] && key <= a[l])
            return recursive_approach_rotatedsortedarray(a, mid + 1, r, key);
        else
            return recursive_approach_rotatedsortedarray(a, l, mid - 1, key);
    }
}
int findmaxindexinmountain(int a[], int size)
{
    int l = 0, r = size - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[l] <= a[m] && a[m] > a[m + 1])
        {
            return m;
        }
        else if (a[l] < a[m])
            l = m + 1;
        else
            r = m - 1;
    }
}
int checkpair_in_rotatedsortedarray(int a[],int size,int sum){
    
}

int main()
{
    int a[] = {2,2,2,2,2,2,0,2};
    cout << findindex_rotatedarraydup(a, 8, 0)<<endl;
    int b[] = {3, 4, 5, 6, 3};
    cout << findmaxindexinmountain(b, 5);
}
