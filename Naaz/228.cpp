  
#include <iostream>
#include <algorithm>
using namespace std;
int m[4], n = 3;
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> m[i];
    }
    sort(m,m+ 4);
    for (int i = 0; i < 3; i++) {
        if (m[i] != m[i + 1]) {
            n--;
        }
    }
    cout <<n<<endl;
}