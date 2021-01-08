#include<iostream>
using namespace std;
int main()
{
    int l=0,n=0,good=0;
    string s;
    cin>>s;
    l=s.length();
    for(int i=0; i<l; i++)
        if(s[i]=='a')
            n++;

    cout<<min(l,2*n-1)<<endl;

    return 0;
}
