// Date- 17/01/2021
// Problem Link- https://codeforces.com/problemset/problem/545/D, rated 1200

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n(0), m(0); 
    cin >> n >> m;
    long *data = new long[n + 1];
    data[0] = 0; 
    for(int k = 1; k <= n; k++)
        cin >> data[k];

    long globalAdd(0);
    
    while(m--)
    {
        int action; 
        cin >> action;

        if(action == 1)
        {
            long element, value; 
            cin >> element >> value; 
            data[element] = value - globalAdd;
        }
        else if(action == 2)
        {
            long addNew(0); 
            cin >> addNew; 
            globalAdd += addNew;
        }
        else if(action == 3)
        {
            long element;
            cin >> element;
            cout << data[element] + globalAdd << endl;
        }
    }
    return 0;
}