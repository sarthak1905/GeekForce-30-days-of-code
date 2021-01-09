//https://codeforces.com/problemset/problem/1426/A
//Date: 09/01/21

#include<iostream>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n>>x;
        if(n==1||n==2)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=0;i<=2000;i++)
            {
                if(n>=((i*x)+3) && n<=(((i+1)*x)+2))
                {
                   cout<<i+2<<endl;
                }
            } 
        }
    }
return 0;
}