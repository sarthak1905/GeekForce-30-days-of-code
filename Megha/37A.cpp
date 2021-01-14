// Problem-Link https://codeforces.com/problemset/problem/37/A
// Date - 14/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,k,t=1;
    cin>>a;
    map<int,int>arr;

    for(int i=0;i<a;i++)
    {
      cin>>k;
      arr[k]++;
      t=max(t,arr[k]);
    }
    cout<<t<<" "<<arr.size();
}
