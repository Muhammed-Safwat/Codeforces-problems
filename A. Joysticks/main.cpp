#include <iostream>

using namespace std;

int main()
{
    int a , b ,c=0 ;
    cin>>a>>b;
    if(a==1 && b==1){
        cout<<0;
    }else{
    while (a>0 && b>0){
        if(a<b){
            a++;
            b-=2;
        }else{
            b++;
            a-=2;
        }
        c++;
    }
        cout<<c;
    }
    return 0;
}
