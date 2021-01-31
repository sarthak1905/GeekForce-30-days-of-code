// Date- 27/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1020/B, rated 1000

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n; scanf("%ld", &n);
    vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    vector<bool> visited(n + 1, 0);
    vector<long> b(n + 1, 0);
    for(long p = 1; p <= n; p++){
        if(visited[p]){continue;}
        long cur = p; vector<long> s;
        while(!visited[cur]){s.push_back(cur); visited[cur] = true; cur = a[cur];}
        bool found(false);
        while(!s.empty()){
            long u = s.back(); s.pop_back();
            b[u] = found ? cur : u;
            found = (u == cur);
        }
    }
    for(long p = 1; p <= n; p++){printf("%ld ", b[p]);}; puts("");
    return 0;
}