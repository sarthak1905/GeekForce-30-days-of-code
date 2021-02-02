// Problem-Link https://codeforces.com/problemset/problem/1288/A
// Date - 27/1/2021
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,d,n,k=1;

    cin>>t;
    for(int i=0;i<t;++i)
    {
        k=1;
        cin>>n>>d;
        if(n>=d)
            cout<<"YES"<<endl;
        else
        {
           for(int x=1;x<=n;x++)
               {
                   if(ceil(d/(x+1))+x<=n)
                   {
                       if((1-n)*(1-n)-(4*(d-n))>=0)
                       {
                           cout<<"Yes"<<endl; k=0; break;
                       }
                   }
               }
           if(k==1) cout<<"NO"<<endl;
        }
    }
}
