// Problem-Link https://codeforces.com/problemset/problem/27/A
// Date - 13/1/2021

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   int t,k;
   vector<int>v;
   cin>>t;
   for(int i=0;i<t;++i)
    {
        cin>>k;
        v.push_back(k);
    }
   sort(v.begin(),v.end());

          for(int i=0;i<v.size();i++)
            {
            if(v[i]!=i+1)
             {
               cout<<i+1;
               break;
             }
             else if(i==v.size()-1)
                {
                    cout<<v[i]+1;
                    break;
                }
            }
    return 0;
}
