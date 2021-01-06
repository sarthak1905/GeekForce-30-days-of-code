//https://codeforces.com/problemset/problem/712/B
//Date: 6/01/2021

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,r=0,u=0,d=0,ans;
    if(s.length()%2==0)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            else if(s[i]=='R')
            {
                l--;
            }
            else if(s[i]=='U')
            {
                u++;
            }
            else if(s[i]=='D')
            {
                u--;
            }
        }
        ans= abs(l)+abs(u);
        cout<<ans/2<<endl;
        return 0;
    }
    else
    {
        cout<<"-1"<<endl;
        return 0;
    }
}