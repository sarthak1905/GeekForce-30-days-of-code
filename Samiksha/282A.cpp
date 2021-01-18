//https://codeforces.com/problemset/problem/282/A
//Date: 18/01/2021

#include<iostream>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
        {
            res=res+1;
        }
        else if(s[0]=='-'||s[2]=='-') 
        {
            res=res-1;
        }
    }
    cout<<res<<endl;
}