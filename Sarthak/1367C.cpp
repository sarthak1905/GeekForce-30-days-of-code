// Date- 09/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1367/C, rated 1300

#include<bits/stdc++.h>

using namespace std;

int main(){

    long t; 
    cin >> t;
    while(t--)
    {
        long n, k; 
        cin >> n >> k;
        string s; 
        cin >> s;
        long last(-k - 7);
        for(long p = 0; p < s.size(); p++)
        {
            if(s[p] == '1')
                last = p;
            else if(p <= last + k)
                s[p] = '2';
        }
        long cnt(0);
        last = s.size() + k + 7;
        for(long p = s.size(); p >= 0; p--)
        {
            if(s[p] == '1')
                last = p;
            else if(p + k < last && s[p] == '0')
            {
                ++cnt; 
                last = p;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}