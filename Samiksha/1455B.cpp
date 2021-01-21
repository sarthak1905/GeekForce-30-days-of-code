//https://codeforces.com/problemset/problem/1455/B
//Date: 17/01/2021
#include<iostream>
typedef long long ll;
using namespace std;
void solve()
{
    ll x;
    cin>>x;
    ll i;
    for(i=0;i<x;i++)
    {
        if(i*(i+1)/2>=x)
        {
            break;
        }
    }
  ll k= (i*(i+1))/2;
  if(k==x+1)
  cout<<i+1<<endl;
  else
  cout<<i<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}