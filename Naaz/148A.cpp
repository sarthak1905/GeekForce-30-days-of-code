#include<iostream>
using namespace std;
int main()
{
	int k,l,m,n,d,c=0,i;
	cin>>k>>l>>m>>n>>d;
	c=d;
	if(k==1||l==1||m==1||n==1)
	cout<<c<<endl;
	else{
		for(i=1;i<=d;i++){
			if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0)){
				c--;
			}
		}
	cout<<c;
	}
	return 0;
}