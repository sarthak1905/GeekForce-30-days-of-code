#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ans;
    if(b>=0)
    {
        ans=abs((a+b)%n);
        if(ans==0)
            ans=n;
    }
    else{
        ans=(n-(abs(b)%n)+a)%n;
        if(ans==0)
            ans=n;
    }
    cout<<ans<<endl;
}