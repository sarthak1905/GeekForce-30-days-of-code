#include<iostream>
using namespace std;
int main()
{

 int t;
 cin>>t;
 long long int n;
 while(t>0)
 {
     cin>>n;
     if (n==1)
            cout<<"0"<<endl;
     else if (n==2)
        cout<<"1"<<endl;
    else if (n==3)
        cout<<"2"<<endl;
        else{
            if(n%2!=0)
            {
                cout<<"3"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }

     t--;
 }
}

