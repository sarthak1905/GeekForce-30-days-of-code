#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string s;
   int upper = 0, l=0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    { if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
    }
     for (int i = 0; i < s.length(); i++)
    { if (s[i] >= 'a' && s[i] <= 'z')
            l++;
    }


   if(upper>l){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
}
