#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,p,q,c=0;
int a[250];
cin>>n>>p;
  for(int i=0;i<p;i++)
   {
   cin>>a[i];
   }
cin>>q;
    for(int i=p;i<p+q;i++)
  {
      cin>>a[i];
  }
sort(a , a+(p+q));

    for(int i = 0 ; i < p+q ; i++){
        if(a[i] != a[i+1]){
            c++;
        }
    }

    if(n == (c)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }



}
