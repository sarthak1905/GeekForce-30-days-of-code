// Date- 07/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1409/B, rated 1300

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef unsigned long long ll;

int main()
{
    ll t, a, b, x, y, n;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> x >> y >> n;
        if(n==0)
        {
            cout << a*b << endl;
            continue;
        }
        if(n >= ((a-x) + (b-y)))
        {
            cout << x*y << endl;
            continue;
        }
        ll best = a*b;
        if ( b - n >= y)
            best = min((b -n) * a, best);
        if ( a - n >= x)
            best = min((a - n) * b, best);
        if ( b - n < y)
            best = min(y * (a - (n - (b - y))), best);
        if ( a - n < x)
            best = min(x * (b - (n - (a - x))), best);
        cout << best << endl;
    }   
    return 0;
}