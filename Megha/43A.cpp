// Problem-Link https://codeforces.com/problemset/problem/43/A
// Date - 11/1/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,k=0;
    map<string,int>a;
    map<string,int>::iterator it;
    string str,maximum;

    cin>>test;
    a[str]=0;

    for(int i=0;i<test;i++)
    {
        cin>>str;
        a[str]++;
    }
    for(it = a.begin(); it != a.end(); ++it )
        if (it ->second > k)
    {
        maximum = it->first;
        k = it->second;
    }
    cout<<maximum;
    return 0;
}
