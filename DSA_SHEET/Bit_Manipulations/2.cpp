#include <bits\stdc++.h>
using namespace std;
unsigned int reverse(unsigned int n)
{
    int res = 0;
    for (int i = 0; i <32; i++)
    {
        res = res << 1;
        res = res | (n & 1);

        n = n >> 1;
    }
    return res;
}
int main()
{
    unsigned int n;
    cin >> n;
    cout << reverse(n) << endl;
}
