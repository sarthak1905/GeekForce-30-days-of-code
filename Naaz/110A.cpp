#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
string s;
cin>>s;
int len=s.length();
 int len1=count(s.begin(),s.end(),'4');
 int len2=count(s.begin(),s.end(),'7');
 if((len1+len2==4 ||len1+len2==7 ))
	 cout<<"YES";
 else
 cout<<"NO";


	return 0;
}
