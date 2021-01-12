//https://codeforces.com/problemset/problem/1326/A
//Date: 12/01/2021

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else 
        {
            n--;
            cout<<2;
            for(int i=0;i<n;i++)
            {
                cout<<3;
            }
            cout<<endl;
        }
    }
    return 0;
}