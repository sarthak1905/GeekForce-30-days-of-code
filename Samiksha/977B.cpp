//https://codeforces.com/problemset/problem/977/B
//Date: 10/01/2021

#include<iostream>
#include<string>
using namespace std;
string str;
int func(string sub)
{
    int count;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==sub[0]&&str[i+1]==sub[1])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,max=0;
    cin>>n;
    string sub,gram;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        sub = str.substr(i,2);
        int temp = func(sub);
        if(temp>max)
        {
            max = temp;
            gram = sub;
        }
    }
    cout<<gram<<endl;
}