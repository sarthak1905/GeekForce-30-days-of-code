// Date- 18/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1037/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, s; 
    cin >> n >> s;
    vector<ll> a(n);
    for(ll p = 0; p < n; p++)
        cin >> a[p];
    sort(a.begin(), a.end());
    ll cnt(0);
    for(ll p = 0; p < n; p++)
    {
        if((2 * p + 1 <= n) && (a[p] > s))
            cnt += (a[p] - s);
        else if((2 * p + 1 >= n) && (a[p] < s))
            cnt += (s - a[p]);
    }
    cout << cnt << endl;
    return 0;
}