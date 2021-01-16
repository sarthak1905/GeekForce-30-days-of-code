//Problem-link:https://codeforces.com/problemset/problem/4/C
//Date : 15/01/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
    map<string,int>mp;
    string name;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>name;
        if(mp[name]>0)
        cout<<name<<mp[name]<<endl;
        else cout<<"OK"<<endl;
        mp[name]++;
    }
}
