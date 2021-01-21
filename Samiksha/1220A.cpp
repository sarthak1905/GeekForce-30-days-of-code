//https://codeforces.com/problemset/problem/1220/A
//Date: 5/01/2021

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[100000];
    cin>>s;
    int z_count=0,n_count=0;
    for(int i=0;i<n;i++) 
    {
        if(s[i] =='z')
            z_count++;
        else if(s[i]=='n')
            n_count++;
    }
    while(n_count--)
        cout<<"1 ";
    while(z_count--)
        cout<<"0 ";
 return 0;
}