#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        int a[N],b[M];
        int asum=0,bsum=0;
        for(int i=0;i<N;i++){
            cin>>a[i];
            asum+=a[i];
        }
        for(int i=0;i<M;i++){
            cin>>b[i];
            bsum+=b[i];
        }
        if(asum>bsum){
            cout<<0<<endl;
        }
        else{
            sort(a,a+N);
            sort(b,b+M);
            reverse(b,b+M);
            int j=0;
            int c=0;
            for(int i=0;i<N;i++){
                if(j<M){
                    asum=asum-a[i]+b[j];
                    bsum=bsum-b[j]+a[i];
                    swap(a[i],b[j]);
                    c++;
                    j++;
                    if(asum>bsum){
                        break;
                    }
                }
            }
            cout<<c<<endl;
        }
    }
    return 0;
}