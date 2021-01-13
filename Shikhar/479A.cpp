#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,p,q,r,s,t,u;
    cin>>a>>b>>c;
    
    p=a+b*c;
    q=a*(b+c);
    r=a*b*c;
    s=(a+b)*c;
    t=a+b+c;
    u=a*b+c;
    
    int arr[6],max=0;
    arr[0]=p;
    arr[1]=q;
    arr[2]=r;
    arr[3]=s;
    arr[4]=t;
    arr[5]=u;
    
    for(int i=0;i<6;i++){
       if(arr[i]>max){
           max=arr[i];
       } 
    }
    cout<<max<<endl;
    

    return 0;
}