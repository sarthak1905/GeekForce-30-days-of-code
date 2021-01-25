//Problem-link:https://codeforces.com/problemset/problem/1140/A
//Date : 25/01/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,days=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    for(int i=0;i<n;i++)

        {
            k=max(k,array[i]);

            if(k==i+1)
                days++;
        }
        cout<<days;
}

