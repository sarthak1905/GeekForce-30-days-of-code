// Problem-Link https://codeforces.com/problemset/problem/39/D
// Date - 12/1/2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3];
    float d;
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];
    d=sqrt(pow((a[0]-b[0]),2)+pow((a[1]-b[1]),2)+pow((a[2]-b[2]),2));
    if(d==1||d-1.414<d*0.001)
        cout<<"YES";
    else cout<<"NO";

    return 0;
}
