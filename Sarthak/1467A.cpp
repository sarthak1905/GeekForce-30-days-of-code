// Date- 20/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1467/A, rated 900
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t; 
    cin >> t;
    while(t--)
    {
        long n; 
        cin >> n;
        if(n >= 1){printf("9");}
        if(n >= 2){printf("8");}
        for(long p = 0; p + 2 < n; p++){printf("%ld", (9 + p) % 10);}
        puts("");
    }
    return 0;
}