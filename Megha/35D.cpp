// Problem-Link https://codeforces.com/problemset/problem/35/D
// Date - 5/1/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int n,x,c,sum=0,k=0,array[100];
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        array[i]=((n-i)*c);
    }
    sort(array,array+n);
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
        if(sum<=x)
        {
            k++;
        }
        else break;
    }
    cout<<k<<endl;
}
