#include<iostream>
using namespace std;
int main()
{
    int k,n,w,ans;
    cin>>k>>n>>w;
    w=w*(w+1)/2;
   ans=k*w-n;
    if(ans<=0)
        ans=0;
        cout<<ans<<endl;
        return 0;
}
