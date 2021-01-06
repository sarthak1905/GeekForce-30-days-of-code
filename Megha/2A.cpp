// Problem-Link https://codeforces.com/problemset/problem/2/A
// Date - 6/1/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<string, int> a, b;
   int n,array[1000],k=0,i;
   string s[1000];
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s[i]>>array[i];
       a[s[i]]+=array[i];
   }
   for(i=0;i<n;i++)
   {
       k=max(k,a[s[i]]);
   }
   for(i=0;a[s[i]]<k||(b[s[i]]+=array[i])<k;i++);

 cout<<s[i]<<endl;
}
