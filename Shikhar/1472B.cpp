#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a[100];
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int count1=0,count2=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       for(int i=0;i<n;i++){
           if(a[i]==1){
               count1++;
           }
           else{
               count2++;
           }
       }
       if ((count1+2*count2)%2!=0){
           cout<<"NO"<<endl;
       }
       else{
           int sum=(count1+2*count2)/2;
           if(sum%2==0||sum%2==1&&count1!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
    }

    return 0;
}