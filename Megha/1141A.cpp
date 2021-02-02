// Problem-Link https://codeforces.com/problemset/problem/1141/A
// Date - 26/1/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,ans=0,d=0;
    cin>>n>>m;
    d=m/n;
    if(m%n==0)
      {
          while(d%6==0)
        {
            d=d/6;
            ans+=2;
        }
      while(d%2==0)
       {
           d=d/2;
           ans++;
       }
      while(d%3==0)
        {
            d=d/3;
            ans++;
        }
        if(d==1) cout<<ans;
    else cout<<"-1";
      }else cout<<"-1";

}
