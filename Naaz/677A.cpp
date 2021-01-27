#include<iostream>
using namespace std;
int main(){
    int n,h,t=0,m;
    cin>>n>>h;
    while(n--)
    {
        cin>>m;
        if(m<=h)
            t=t+1;
        else if(m>h)
            t=t+2;

    }
    cout<<t;
}
