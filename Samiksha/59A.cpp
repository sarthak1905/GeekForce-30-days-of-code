//https://codeforces.com/problemset/problem/59/A
//Date: 10/01/21

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c_low=0;
    int c_upp=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            c_upp++;
        }
        else
        {
            c_low++;
        }
    }
 if(c_upp>c_low)
 {
     for(int i=0;i<s.length();i++)
     {
         char ch;
         ch = toupper(s[i]);
         cout<<ch;
     }
 }
 else if(c_upp==c_low)
 {
     for(int i=0;i<s.length();i++)
     {
         char ch;
         ch = tolower(s[i]);
         cout<<ch;
     }
 }
 else 
 {
     for(int i=0;i<s.length();i++)
     {
         char ch;
         ch = tolower(s[i]);
         cout<<ch;
     }
 }
   
return 0;
}