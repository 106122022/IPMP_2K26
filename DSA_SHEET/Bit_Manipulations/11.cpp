#include <bits/stdc++.h>
using namespace std;

int find(int n) {
    if (n == 0)
        return 0;

    int cntp = 1;
    int count = 0;
    int flag = 0;
    int k;

    while (n) {
        if ((n & 1) != 1) {
            cntp++;
        } else {
            if (flag == 0) {
                k = cntp;
                flag = 1;
            }
            count++;
        }
        n = n >> 1;
    }

    if (count == 1) {
        return k;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    cout << find(n) << endl;
    return 0;
}
