// Date- 08/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1294/C, rated 1300

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

int main()
{
    ll n, i, t;
    vector<string> answer;
    cin >> t;
    while(t > 0)
    {
        cin >> n;
        ll num = n;
        string s;
        vector<ll> arr;
        loop(i, 2, sqrt(num))
        {
            if(arr.size() == 3)
                break;
            if(n % i == 0)
            {
                n /= i;
                arr.push_back(i);
                if(arr.size() == 2)
                {
                    if(n > i)
                        arr.push_back(n);
                    break;
                }
            }
        }
        if(arr.size() < 3)
            cout << "NO";
        else
            cout << "YES\n" << arr[0] << " " << arr[1] << " " << arr[2]; 
        t--;
        if (t > 0)
            cout << endl;
    }
    return 0;
}