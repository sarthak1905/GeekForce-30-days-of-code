// Problem-Link https://codeforces.com/problemset/problem/6/A
// Date - 7/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[4];
    for(int i=0;i<4;i++)
    {
        cin>>array[i];
    }
    sort(array,array+4);
    if(array[0]+array[1]>array[2]||array[1]+array[2]>array[3])
        cout<<"TRIANGLE"<<endl;
    else if(array[0]+array[1]==array[2]||array[1]+array[2]==array[3])
        cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
