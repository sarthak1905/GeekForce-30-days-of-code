//https://codeforces.com/problemset/problem/1462/C
//Date: 26/01/2021
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>45)
        {
            cout<<"-1"<<endl;
        }
        else {
            int max=9;
            int a[10];
            int k=0;
            while(1)
            {
                if(x<=max)
                {
                    a[k]=x;
                    break;
                }
                if(x>max)
                {
                    a[k]=max;
                    x-=max;
                    max--;
                    k++;
                }
            }
            for(int i=k;i>=0;i--)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
    }
return 0;
}