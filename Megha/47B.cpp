// Problem-Link https://codeforces.com/problemset/problem/47/B
// Date - 10/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,str;
    cin>>a>>b>>c;
    if(a[1]=='>')
        swap(a[0],a[2]);
    if(b[1]=='>')
        swap(b[0],b[2]);
    if(c[1]=='>')
        swap(c[0],c[2]);
    if(a[0]==b[0])
        cout<<a[0]<<c[0]<<c[2]<<endl;
    else if(a[0]==c[0])
        cout<<a[0]<<b[0]<<b[2]<<endl;
    else if(b[0]==c[0])
        cout<<b[0]<<a[0]<<a[2]<<endl;
    else cout<<"Impossible"<<endl;
    return 0;

}

