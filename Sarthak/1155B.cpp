// Date- 13/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1155/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; 
    cin >> n;
    string s; 
    cin >> s;
    ll cnt(0);
    for(long p = 0; p < s.size() - 10; p++)
        cnt += (s[p] == '8');
    ll trn = (s.size() - 11) / 2;
    cout << (trn < cnt ? "YES" : "NO") << endl;
    return 0;
}