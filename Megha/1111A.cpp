// Problem-Link https://codeforces.com/problemset/problem/1111/A
// Date - 21/1/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int k=0;
    cin>>s>>t;
    if(s.size()==t.size())
    {
        for(int i=0;i<s.size(),i<t.size();++i)
        {
          if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
                k=1;
          else if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(t[i]!='a'&&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u'))
                k=1;
            else
            {
                k=0;
                break;
            }
        }
        if(k==1)
        cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
}
