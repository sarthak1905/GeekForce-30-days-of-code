// Date- 12/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1060/B, rated 1100
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, a(1), b; 
    cin >> n;
    m = n; 
    while(a <= m)
        a *= 10;
    a /= 10; 
    a -= 1; 
    b = n - a;
    long s(0);
    while(a > 0)
    {
        s += (a % 10); 
        a /= 10;
    }
    while(b > 0)
    {
        s += (b % 10); 
        b /= 10;
    }
    cout << s << endl;

    return 0;
}