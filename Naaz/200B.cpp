#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pi;
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> pi;
        sum= sum+ pi;
    }
    printf("%lf", sum / n);
    return 0;
}