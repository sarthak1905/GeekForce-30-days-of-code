#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t>0)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
        t--;
    }
    cout << s << endl;
    return 0;
}