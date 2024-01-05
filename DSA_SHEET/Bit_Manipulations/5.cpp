    #include <bits\stdc++.h>
    using namespace std;
    int rotate(int n, int d)
    {
        int bits = 16;
        long long int res1 = (n << d) | (n >> (bits - d));
        long long int res2 = (n >> d) | (n << (bits - d));
        cout<<res1<<" "<<res2;
    }
    int main() {
        int n,d;
        cin>>n>>d;
        rotate(n,d);
    }
