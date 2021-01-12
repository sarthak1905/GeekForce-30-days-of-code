// Date- 11/01/2021
// Problem Link- https://codeforces.com/problemset/problem/545/D, rated 1500
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m; 
    cin >> n >> m;
    vector<ll> a(n + 2, 0); 
    a[n + 1] = m;
    for(ll p = 1; p <= n; p++)
        cin >> a[p];
    ll orig(0), off(0), mx(0);
    for(ll p = n; p >= 0; p--)
    {
        if(p % 2)
            off += a[p + 1] - a[p];
        else
            orig += a[p + 1] - a[p];
        mx = (mx > off - orig) ? mx : (off - orig);
    }
    cout << orig + (mx > 0) * (mx - 1) << endl;
    return 0;
}