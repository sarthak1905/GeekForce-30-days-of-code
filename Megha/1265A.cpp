// Problem-Link https://codeforces.com/problemset/problem/1265/A
// Date - 28/1/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0; string str;
    cin>>n;
    for(int p=0;p<n;++p)
    {
        k=0;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
        if(str[i]==str[i+1]&&str[i]!='?') {cout<<"-1"<<endl; k=1; break;}
        else if(str[i]=='?')
            {
                if(str[i-1]!='a' && str[i+1]!='a'){
                    str[i]='a';
                }
                else if(str[i-1]!='b' && str[i+1]!='b'){
                    str[i]='b';

                }
                else
                    str[i]='c';
            }
        }if(k==0)
        for(int j=0;j<str.size();j++) cout<<str[j]; cout<<endl;
    }
}
