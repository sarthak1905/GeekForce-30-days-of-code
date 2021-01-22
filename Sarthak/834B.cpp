// Date- 20/01/2021
// Problem Link- https://codeforces.com/problemset/problem/834/B, rated 1100
#include<bits/stdc++.h>S

using namespace std;

int main()
{
    const int N = 26;
    vector<pair<long, long> > a(N, pair<long, long>(-1, -1));
    long n; 
    int k; 
    cin >> n >> k;
    string s; 
    cin >> s;

    for(long p = 0; p < s.size(); p++){a[s[p] - 'A'].second = p;}
    for(long p = s.size() - 1; p >= 0; p--){a[s[p] - 'A'].first = p;}

    bool unguarded(false);
    for(long p = 0; p < s.size(); p++)
    {
        int count = 0;
        for(int u = 0; u < N; u++){count += (a[u].first <= p) && (p <= a[u].second);}
        if(count > k){unguarded = true; break;}
    }
    cout << (unguarded ? "YES" : "NO") << endl;
    return 0;
}