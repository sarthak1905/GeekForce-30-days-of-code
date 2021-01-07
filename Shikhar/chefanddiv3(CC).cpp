#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int N,K,D,a[100000],sum=0;
    std::vector<int> A;
    cin>>t;
    
    while(t!=0){
        
        cin>>N>>K>>D;
        
        for(int i=0;i<N;i++){
            cin>>a[i];
            }
        for(int i=0;i<N;i++){
            sum+=a[i];
        }
       int res=sum/K;
        if(res>=D){
            cout<<D<<endl;
        }
        else {
            cout<<res<<endl;
        }
        sum=0;
    t--;
    }
    
    
    
    return 0;
}