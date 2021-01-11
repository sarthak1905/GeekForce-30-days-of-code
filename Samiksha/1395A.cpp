//https://codeforces.com/problemset/problem/1395/A
//Date: 11/01/2021

#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        ll c = 0;
        ll val = min({r, g, b});
        if (r % 2 == 1)
            c++;
        if (g % 2 == 1)
            c++;
        if (b % 2 == 1)
            c++;
        if (w % 2 == 1)
            c++;
        if (c <= 1)
            cout << "YES" << endl;
        else if (val != 0)
        {
            r--;
            g--;
            b--;
            w--;
            c = 0;
            if (r % 2 == 1)
                c++;
            if (g % 2 == 1)
                c++;
            if (b % 2 == 1)
                c++;
            if (w % 2 == 1)
                c++;
            if (c <= 1)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
        {
            cout << "NO" <<"\n";
        }
    }
    return 0;
}