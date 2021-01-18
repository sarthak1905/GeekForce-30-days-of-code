//Problem-link: https://codeforces.com/problemset/problem/109/A
//Date: 18/01/2021

#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   string s="";
   while(n>0){
      if(n%7==0){
         s=s+'7';
         n-=7;
      }else{
         s=s+'4';
         n-=4;
      }
   }
   if(n==0){
     cout<<s;
   }else{
     cout<<-1;
   }
}
