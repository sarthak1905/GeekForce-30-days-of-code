#include<iostream>
using namespace std;
int main()
{
    long long int j,c, n;
    cin>>n;
    long long int i, a[n],b[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
     c=0;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                c++;
        }
    }
    cout<<c<<endl;
}