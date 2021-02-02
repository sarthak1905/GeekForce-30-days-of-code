#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i, u=0;
	char c[105];
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		if(c[i]>=65 && c[i]<=90)
        {
            c[i]=97+c[i]-65;
        }
	}

	sort(c,c+n);
    for(i=0;i<n-1;i++)
    {
        if(c[i]!=c[i+1])
        {
            u++;
        }
    }

	if(u==25)
        {
		cout<<"YES";
	}
	else
		cout<<"NO";
}
