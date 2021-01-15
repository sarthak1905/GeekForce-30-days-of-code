// Date- 15/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1263/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    long t; 
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        vector<string> pv;
        set<string> pset;
        long cnt(0);
        for(long p = 0; p < n; p++)
        {
            string s;
            cin >> s;
            if(pset.count(s))
            {
                ++cnt;
                bool done(false);
                for(long idx = 0; idx < s.size(); idx++)
                {
                    if(done)
                        break;
                    for(long d = 1; d <= 9; d++)
                    {
                        if(done)
                            break;
                        int x = s[idx] - '0';
                        x += d; 
                        x %= 10;
                        string t = s;
                        t[idx] = (x + '0');
                        if(!(pset.count(t)))
                        {
                            s = t; 
                            done = true;
                            break;
                        }
                    }
                }
            }
            pv.push_back(s);
            pset.insert(s);
        }
        cout << cnt << endl;
        for(long p = 0; p < n; p++)
            std::cout << pv[p] << endl;
    }
    return 0;
}