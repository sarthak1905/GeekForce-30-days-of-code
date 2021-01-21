// Problem-Link https://codeforces.com/problemset/problem/58/A
// Date - 19/1/2021

#include<iostream>
using namespace std;

int main()
{
    string s; int p,k=0;
    cin>>s;
    for(int i=s.size();i>=0;i--)
    {
        if(s[i]=='o')
            {
                p=i; k++; break;
            }
    }
    for(int i=p-1;i>=0;i--)
    {
        if(s[i]=='l')
            {
                p=i;k++; break;
            }
    }
    for(int i=p-1;i>=0;i--)
    {
        if(s[i]=='l')
           {
                p=i;k++; break;
            }
    }
    for(int i=p-1;i>=0;i--)
    {
        if(s[i]=='e')
            {
                p=i;k++; break;
            }
    }
    for(int i=p-1;i>=0;i--)
    {
        if(s[i]=='h')
            {
                p=i;k++; break;
            }
    }
    if(k==5) cout<<"YES";
    else cout<<"NO";
}
