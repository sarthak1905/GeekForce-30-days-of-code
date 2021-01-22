// Problem-Link https://codeforces.com/problemset/problem/237/A
// Date - 20/1/2021

#include<bits/stdc++.h>
using namespace std;
int arr[24][60];
int main()
{
    int a,h,m,k=1;
   cin>>a;
   for(int i=0;i<a;i++)
   {
       cin>>h>>m;
       arr[h][m]++;
       k=max(k,arr[h][m]);
   }
   cout<<k;
}

