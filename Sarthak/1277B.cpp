// Date- 26/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1277/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t; 
    scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        set<long> s; 
        long cnt(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(x % 2 == 0){s.insert(x);}}
        while(s.size()){
            long x = *(s.rbegin());
            s.erase(x); ++cnt;
            x /= 2;
            if(x % 2 == 0){s.insert(x);}
        }
        printf("%ld\n", cnt);
    }
    return 0;
}