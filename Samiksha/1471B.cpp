//https://codeforces.com/problemset/problem/1471/B
//Date: 27/01/2021
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll minimum=1e9,k=0;
        for(int i=0;i<n;i++)
        {
            int y=a[i];
            int deg=0;
            while(y%x==0)
            {
                y=y/x;
                deg++;
            }
            if(deg<minimum)
            {
                minimum=deg;
                k=i;
            }
        }
    ll ans=accumulate(a.begin(),a.end(),0LL)*(minimum+1);
    for(int i=0;i<k;i++){
        ans=ans+a[i];
    }
        cout<<ans<<endl;
  }
return 0;
} 