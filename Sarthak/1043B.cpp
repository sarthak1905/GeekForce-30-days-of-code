// Date- 16/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1043/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n; 
    cin >> n;
    vector<long> a(n + 1, 0); 
    for(long p = 1; p <= n; p++)
        scanf("%ld", &a[p]);
    vector<long> d(n); 
    for(long p = 0; p < n; p++)
        d[p] = a[p + 1] - a[p];
    vector<long> res;
    for(long g = 1; g < n; g++)
    {
        bool possible(true);
        for(long u = 0; u + g < n; u++)
            if(d[u] != d[u + g])
            {
                possible = false; 
                break;
            }
        if(possible){res.push_back(g);}
    }
    res.push_back(n);
    cout << res.size() << endl;
    for(long p = 0; p < res.size(); p++)
        cout << res[p] << " ";
    return 0;
}