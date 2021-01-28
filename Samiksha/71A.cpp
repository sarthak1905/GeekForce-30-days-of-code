//https://codeforces.com/problemset/problem/71/A
//Date= 28/01/2021

#include<iostream>
#include<string>
using namespace std;
int main()
{
   int n,i;
   string str;
   cin>>n;
   for(i=0; i<n; i++)
   {
       cin>>str;
       int l = str.length();
       if(l>10)
       {
          cout<<str[0]<<l-2<<str[l-1]<<endl;
       }
       else
       {
          cout<<str<<endl;
       }
   }
return 0;
}