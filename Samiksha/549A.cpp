//https://codeforces.com/problemset/problem/549/A
//Date: 7/01/2021

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ 
    int n,m,res=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
          cin>>a[i][j];
       }
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<m-1;j++)
       {
          string str;
          str = str+a[i][j];
          str = str+a[i][j+1];
          str = str+a[i+1][j];
          str = str+a[i+1][j+1];
          sort(str.begin(),str.end());
          if(str=="acef")
          {
             res++;
          }
       } 
    }
cout<<res<<endl;
return 0;
}
