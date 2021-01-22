#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a1,a2,b1,b2;
    cin>>t;
    while(t--)
    {
        cin>>a1>>b1>>a2>>b2;
        if(a1 > b1)swap(a1,b1);
        if(a2 > b2)swap(a2,b2);

        if(a1+a2 == b1 && a1+a2 == b2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}