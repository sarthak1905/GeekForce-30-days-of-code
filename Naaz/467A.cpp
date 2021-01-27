#include <iostream>
using namespace std;
int main()
{
	int p,q,n,t=0;
	cin>>n;
   while(n--)
   {
   	cin>>p>>q;
   	if((p+1)<q)
   		t++;
   }
   cout<<t;
}
