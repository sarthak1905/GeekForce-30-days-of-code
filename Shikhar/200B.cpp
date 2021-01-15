#include <bits/stdc++.h>
using namespace std;

int main(){
	int p[100];
	float n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>p[i];
	    sum+=p[i];
	}
	cout<<sum/n;
	return 0;
}
