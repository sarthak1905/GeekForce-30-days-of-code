//Problem-link:https://codeforces.com/problemset/problem/334/A
//Date : 24/01/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         ans=i;
         cout<<i<<" ";
        for(int j=2;j<=n;j++)
         {
             if(j%2!=0)
               {
                   ans+=(2*i)-1;
                   cout<<ans<<" ";
               }
             else
               {
                   ans+=((n-i+1)*2)-1;
                   cout<<ans<<" ";

               }
         } cout<<endl;
    }
}
