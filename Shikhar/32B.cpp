#include<bits/stdc++.h>
using namespace std;

int main() {
 
string code,str;
cin>>code;
int len=code.length();
for(int i=0;i<len;i++)

{
	if(code[i]=='.'){
		str+='0';
	}
	if(code[i]=='-'&&code[i+1]=='.'){
		str+='1';
		++i;
		
	}
	if(code[i]=='-'&&code[i+1]=='-'){
		str+='2';
		++i;
	}
	
} 
 cout<<str;
 
 
 
 	return 0;
}