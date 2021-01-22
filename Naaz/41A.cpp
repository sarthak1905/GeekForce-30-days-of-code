#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string s,t;
getline(cin, s);
getline(cin, t);
reverse(t.begin(), t.end());
if(t==s)
    cout<<"YES";
else
    cout<<"NO";
}
