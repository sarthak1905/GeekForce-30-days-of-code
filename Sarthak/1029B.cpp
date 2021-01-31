// Date- 22/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1029/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

int main() 
{
    long n; 
    scanf("%ld", &n);
    vector<long> a(n);
	for(long p = 0; p < n; p++)
    {scanf("%ld", &a[p]);}
    long cnt(1), mx(1);
	for(long p = 1; p < n; p++) {
		cnt = (a[p - 1] * 2 >= a[p]) ? (cnt + 1) : 1;
        mx = (mx > cnt) ? mx : cnt;
	}
    printf("%ld\n", mx);
	return 0;
}