#include <iostream>
#include <vector>
using namespace std;
int main(){

    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
       vector<long> a(n);
       for(long p = 0; p < n; p++)
       {  cin>>a[p];
       }
        long cnt(1);
        ++a[n - 1];
        for(long p = n - 2; p >= 0; p--){
            if(a[p] + 1 < a[p + 1])
            {++a[p]; ++cnt;
            }
            else if(a[p] < a[p + 1])
            {++cnt;
            }
        }

        cout<<cnt<<endl;
    }

}
