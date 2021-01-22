//https://codeforces.com/problemset/problem/158/A
//Date= 19/01/2021
#include<iostream>
using namespace std;
int main()
{
    int n,k,a[50],i,count=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
        {
            count++;
        }
    }
       cout<<count<<endl;
}