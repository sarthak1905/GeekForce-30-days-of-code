// Date- 06/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1446/A, rated 1300

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //cout << "Input:";
        ll n, W, i, j;
        bool done = false;
        cin >> n >> W;
        ll half;
        if (W % 2 == 0)
            half = W/2;
        else
            half = W/2 + 1;
        vector<pair<ll, ll> > w;
        loop(i, 0, n)
        {
            ll temp;
            cin >> temp;
            w.push_back(make_pair(temp, i));
        }
        if(!done)
        {
            ll sum = 0, count = 0;
            sort(w.begin(), w.end());
            for(i = n-1; i >= 0; --i)
            {
                if(w[i].first <= W)
                {
                    count++;
                    sum += w[i].first;
                    if(sum >= half && sum <= W)
                    {
                        done = true;
                        cout << count << endl;
                        for(j = i; j < n; ++j)
                        {
                            if(w[j].first != -1)
                                cout << w[j].second + 1 << " ";
                        }
                        cout << endl;
                        break; 
                    }
                }
                else 
                    w[i].first = -1;
            }
        }
        if(!done)
            cout << "-1" << endl;
    }
    return 0;
}