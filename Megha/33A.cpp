// Problem-Link https://codeforces.com/problemset/problem/33/A
// Date - 8/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,r,c,sum=0;
    cin>>n>>m>>k;
    vector<int> a(m+1,1e9);
    for(int i=0;i<n;i++)
    {
        cin>>r>>c;
        a[r]=min(a[r],c);
    }
    for(int i=1;i<=m;i++)
           sum+=a[i];

   cout<<min(k,sum);
   return 0;
}
