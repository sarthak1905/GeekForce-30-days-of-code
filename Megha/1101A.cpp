//Problem-link:https://codeforces.com/problemset/problem/1101/A
//Date : 22/01/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,l,r,d,ans;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r>>d;
        if(d<l||d>r)
            cout<<d<<endl;
        else
            cout<<d*((r/d)+1)<<endl;
    }
}
