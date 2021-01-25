//Problem-link:https://codeforces.com/problemset/problem/219/A
//Date : 23/01/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r=0,p=0;
    string s,ans;
    map<char,int>mp;
    map<char,int>::iterator it;
    cin>>k>>s;
    if(s.length()%k==0)
    {
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;

        for(it=mp.begin();it!=mp.end();++it)
            if(it->second%k==0)  p++;

        if(p==mp.size())
        {
            for(int i=0;i<k;i++)
              for(it=mp.begin();it!=mp.end();++it)
                  for(int i=0;i<(it->second/k);i++)
                       cout<<it->first;

         }
         else cout<<"-1";
     }
    else cout<<"-1";
    return 0;
}
