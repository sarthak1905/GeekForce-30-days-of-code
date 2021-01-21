//https://codeforces.com/problemset/problem/1409/C
//Date: 16/01/2021

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    vector<int>b(n);
    if(n==2)
    {
        b[0]=x;
        b[1]=y;
        for(auto i:b)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    b[n-1]=1e8;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            a[i]=x;
            a[j]=y;
            int d=y-x;
            int s=j-i;
            if(d%s==0)
            {
                d=d/s;
                for(int k=i-1;k>=0;k--)
                {
                     a[k]=a[k+1]-d;
                }
                for(int k=i+1;k<n;k++)
                {
                    a[k]=a[k-1]+d;
                }
                if(a[0]>0 && a[n-1]<b[n-1])
                {
                    b=a;
                }
            }
        }
    }
    for(auto i:b)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
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
