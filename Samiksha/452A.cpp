//https://codeforces.com/problemset/problem/452/A
//Date: 25/01/2021

#include<bits/stdc++.h>
using namespace std;
string s[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
int main()
{
    int n;
    string str;
    bool ch[8];
    for(int i=0;i<8;i++)
    ch[i]=true;
    cin>>n;
    cin>>str;
    if(n==8){
        cout<<s[0]<<endl;
        return 0;
    }
    else if(n==6){
        cout<<s[3]<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(str[i]=='.')
        continue;
        for(int j=0;j<8;j++)
            if(ch[j] && str[i]!=s[j][i])
                ch[j]=false;
    }
    for(int i=1;i<8;i++)
    if(ch[i])
        cout<<s[i]<<endl;
    return 0;
}
