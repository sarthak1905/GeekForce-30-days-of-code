//https://codeforces.com/problemset/problem/1436/A
//Date: 10/01/21
#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum = sum+a;
        }
    if(sum == m)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
    cout<<"NO"<<endl;
    }
    }
return 0;
}
