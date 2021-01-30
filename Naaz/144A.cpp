#include <iostream>

using namespace std;

int main()
{
    int n,i,h,l,index_max,index_min;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    h=0;
    l=101;
    for(i=0; i<n; i++)
    {
        if(a[i]>h)
        {
            h=a[i];
            index_max=i;
        }
        if(a[i]<=l)
        {
            l=a[i];
            index_min=i;
        }
    }
    n=n-1;
    if(index_max>index_min)
        index_min=index_min+1;
   cout<<index_max+n-index_min<<endl;
    return 0;
}
