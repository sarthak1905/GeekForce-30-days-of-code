// Problem-Link https://codeforces.com/problemset/problem/1165/B
// Date - 29/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,k=1;
    cin>>n;

    priority_queue<int,vector<int>,greater<int> > pq;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            pq.push(a);
        }
    while(pq.empty()==false)
        {
            if(k<=pq.top())
            {
                k++;
                pq.pop();
            }
            else pq.pop();
        }
        cout<<k-1;
        return 0;
}
