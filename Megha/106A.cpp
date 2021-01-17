//Problem-Link: https://codeforces.com/problemset/problem/106/A
//Date: 17/01/21

 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    string b,c;
    cin>>a>>b>>c;
    string str="6789TJQKA";
    if((a=='S'||a=='H'||a=='D'||a=='C')&&(b[1]==a&&c[1]!=a))
        cout<<"YES";
    else
    {
        if(b[1]==c[1]&&str.find(b[0])>str.find(c[0]))
        
        cout<<"YES";
        
        else cout<<"NO";
        
    }
}
