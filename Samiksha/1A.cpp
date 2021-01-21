//https://codeforces.com/problemset/problem/1/A
//Date: 20/01/2021

#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,x,y;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        x=n/a;
    }
    else 
    {
        x=(n/a)+1;
    }
    if(m%a==0)
    {
        y=m/a;
    }
    else 
    {
        y=(m/a)+1;
    }
    cout<<x*y<<endl;
}