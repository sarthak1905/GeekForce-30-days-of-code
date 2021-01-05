// Date- 05/01/2021
// Problem Link- https://codeforces.com/problemset/problem/545/D, rated 1300

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

int main()
{
    ll n, i, temp;
    cin >> n;
    vector<ll> t;
    loop(i, 0, n)
    {
        cin >> temp;
        t.push_back(temp);
    }
    sort(t.begin(), t.end());
    ll count = 1, sum = t[0];
    loop(i, 1, n)
    {
        if(t[i] >= sum)
        {
            count++;
            sum += t[i];
        }
    }
    cout << count;
    return 0;
}