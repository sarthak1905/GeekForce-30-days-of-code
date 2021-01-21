//https://codeforces.com/problemset/problem/1409/B
//Date: 15/01/2021

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;

ll func1(ll a, ll b, ll x, ll y, ll n)
{
    ll da = a-x;
    ll db = b-y;
    ll c1 = min(da,n);
    a = a-c1;
    n = n-c1;
    ll c2 = min(db,n);
    b = b-c2;
    n = n-c2;
    ll ans = a*b;
    return ans;
}

void func2()
{
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll ans = min(func1(a,b,x,y,n), func1(b,a,y,x,n));
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        func2();
    }
    return 0;
}