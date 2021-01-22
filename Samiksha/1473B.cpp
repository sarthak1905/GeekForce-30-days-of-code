//https://codeforces.com/problemset/problem/1473/B
//Date: 22/01/2021
#include<bits/stdc++.h>
using namespace std;
int q;
string a,b,s,t;
int main(){
	cin>>q;
    while(q--){
		cin>>a>>b;s=a;t=b;
		while(1){
			if(s.length()==t.length()){
				if(s==t)
                cout<<s<<endl;
				else 
                cout<<-1<<endl;
				break;
			}
			if(s.length()<t.length()){
            s+=a;
			}
			else {
            t+=b;
			}
		}
	}
			return 0;
	}
