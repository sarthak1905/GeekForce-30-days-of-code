// Problem-Link https://codeforces.com/problemset/problem/1263/A
// Date - 9/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[3],ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);

        if(a[0]+a[1]>=a[2])
           ans=(a[0]+a[1]+a[2])/2;
        else
           ans=a[1]+a[0];
        cout<<ans<<endl;
    }
    return 0;
}
