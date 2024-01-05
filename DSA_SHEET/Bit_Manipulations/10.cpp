#include <bits/stdc++.h>
using namespace std;

int swapbits(unsigned int n) {
    for (int i = 0; i < 31; i=i+2) {
        int present = (n >> i) & 1;
        int prev = (n >> (i + 1)) & 1;
        n = n - (present << i) - (prev << (i + 1)) + (prev << i) + (present << (i + 1));
    }
    return n;
}

int main() {
   unsigned int n;
    cin >> n;
    cout << swapbits(n) << endl;
    return 0;
}
