// Problem-Link https://codeforces.com/problemset/problem/1373/A
// Date - 30/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(c/b==a)
        {
            if(b!=1000000000)
                cout<<b+1<<" "<<"-1"<<endl;
            else
                cout<<"1"<<" "<<"-1"<<endl;
        }
        else if(c/b>a)
            {
                cout<<"1"<<" "<<"-1"<<endl;
            }
        else
        {
         for(int i=1;i<=b;i++)
        {
                if(a<c)
               {
                    cout<<1<<" "; d=1;  break;
               }
        }
        if(d==0)
            cout<<"-1"<<" ";
        d=0;
        for(int i=1;i<=b;i++)
        {
                if(a*b>c)
               {
                    cout<<b<<endl; d=1;break;
               }
        }
        if(d==0)
            cout<<"-1"<<endl;
        d=0;
        }
    }
    return 0;
}

