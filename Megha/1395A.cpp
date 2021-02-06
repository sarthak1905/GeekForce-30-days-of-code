// Problem-Link - https://codeforces.com/contest/1395/problem/A
// Date - 31/1/2021

#include<bits/stdc++.h>
using namespace std;
int odd(int r,int g,int b,int w)
{
    int ctr=0;
    if(r%2!=0)
            ctr++;
        if(g%2!=0)
            ctr++;
        if(b%2!=0)
            ctr++;
        if(w%2!=0)
            ctr++;
        return ctr;
}
int main()
{
    long long int t,r,g,b,w,ctr,k=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        k=1;
        cin>>r>>g>>b>>w;
        ctr=odd(r,g,b,w);
        if(ctr<2)
            cout<<"YES"<<endl; // minimum one can be odd


        else{
            for(int i=1;i<50;i++)
            {
                r=(r-1); g=(g-1); b=(b-1); w=(w+3);  // remove red,blue,green and replace with white
            if(r>=0&&b>=0&&g>=0)
            {
                ctr=odd(r,g,b,w);
             if(ctr<2)
                {
                    cout<<"YES"<<endl;
                k=0;
                break;
                }
            }
            }
            if(k!=0) cout<<"NO"<<endl;
           }
    }
    return 0;
}


