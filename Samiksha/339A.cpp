//https://codeforces.com/problemset/problem/339/A
//Date: 13/01/2021
#include<iostream>
#include<string>
using namespace std;
string a,b;
int main()
{
     cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]<92)
        {
            a[i]=a[i]+32;
        }
    }
    for(int i=0;i<b.length();i++)
    {
        if(b[i]<92)
        {
            b[i]=b[i]+32;
        }
    }
    if(a<b)
    {
        cout<<-1<<endl;
    }
    else if(a>b)
    {
        cout<<1<<endl;
    }
    else if(a==b)
    {
       cout<<0<<endl;       
    }
    return 0;
}
