// Date- 20/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1364/A, rated 1200
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t; 
    cin >> t;
    while(t--)
    {
        long n, x; 
        cin >> n >> x;
        vector<long> a(n); 
        long s(0);
        for(long p = 0; p < n; p++)
        {
            cin >> a[p];
            a[p] %= x;
            s += a[p]; 
            s %= x;
        }
        long ans(n);
        if(s % x == 0)
        {
            long left(0); 
            while(left < n && a[left] == 0)
                ++left;
            long right(0);
            while(right < n && a[n - 1 - right] == 0)
                ++right;
            long mn = (left < right) ? left : right;
            ans -= mn + 1;
        }
        cout << ans << endl;
        continue;
    }
    return 0;
}