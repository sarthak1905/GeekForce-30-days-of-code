#include <iostream>
using namespace std;

int main()
{
    int a,b,n=0,c;
    cin>>a>>b;
    n=a;
    while(1){
        c=a/b;
        a = c+(a%b);
        n+=c;
        if(a<b)
            break;
    }
    cout<<n<<endl;
    return 0;
}