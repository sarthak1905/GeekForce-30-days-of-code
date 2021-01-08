#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    string disp="Poor Alex \n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a<b){
            disp="Happy Alex\n";
        }
    }
    cout<<disp;
    
    return 0;
}