#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int n,a,b ,m=0,d=0;
cin>>n;
while(n>0)
{   a=0;
    b=0;
    cin>>a>>b;
    d=d-a+b;
    m=max(d,m);
    n--;
}
cout<<m;
}
