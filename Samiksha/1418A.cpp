//https://codeforces.com/problemset/problem/1418/A
//Date: 8/01/2021

#include<iostream>
using namespace std;
int main()
{
    long long t,x,y,k,trades,other;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>k;
        trades = ((k*y)+k-1)/(x-1);
        other = ((k*y)+k-1)%(x-1);
        if(other)
        {
            trades++;
        }
        cout<<trades+k<<endl;
    }
return 0;
}