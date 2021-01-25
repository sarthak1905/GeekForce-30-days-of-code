//https://codeforces.com/problemset/problem/1409/A
//Date: 24/01/2021

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        int ans = (abs(a-b)+9)/10;
        cout<<ans<<endl;
    }
    return 0;
}