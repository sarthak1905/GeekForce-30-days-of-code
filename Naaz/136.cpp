#include <iostream>
using namespace std;
int a[110];
int main() {
    int n,e;
    cin>>n;
    int f[n+10];
    for (int i = 0; i < n; i++) {
        cin>>f[i];
    }
    for (int i = 0; i < n; i++) {
        a[f[i]]=i+1;
    }
    for (int i = 1; i <= n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
