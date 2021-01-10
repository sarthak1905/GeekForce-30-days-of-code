// Date- 10/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1055/B, rated 1300

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, l; 
    cin >> n >> m >> l;
    vector<ll> a(n); 
    for(ll p = 0; p < n; p++)
        cin >> a[p];
    ll cnt(0);
    for(ll p = 0; p < n; p++)
    {
        if(a[p] <= l)
            continue;
        if(p == 0 || a[p - 1] <= l)
            ++cnt;
    }
    while(m--)
    {
        ll t; 
        cin >> t;
        if(t)
        {
            ll x, d; 
            cin >> x >> d;
            a[--x] += d;
            if(l < a[x] && a[x] <= l + d){
                if(  ((x == 0) ||  ((x > 0) && (a[x - 1] <= l))) && ((x == n - 1) || ((x + 1 < n) && (a[x + 1] <= l))) ){++cnt;}
                if((x > 0) && (a[x - 1] > l) && (x + 1 < n) && (a[x + 1] > l)){--cnt;}
            }
        }
        else
            cout << cnt << endl;
    }
    return 0;
}