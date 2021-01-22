// Date- 19/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1038/B, rated 1100
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n; 
    cin >> n;
    if(n <= 2)
    {
        puts("No"); 
        return 0;
    }
    puts("Yes");
    printf("1 %ld\n", (n + 1) / 2);
    printf("%ld ", n - 1);
    for(long p = 1; p <= n; p++){
        if(p == (n + 1) / 2){continue;}
        printf("%ld ", p);
    }
    puts("");
    return 0;
}