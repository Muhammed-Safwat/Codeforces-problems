#include <iostream>

using namespace std;

int main()
{
    int l , r , a ;
    cin>>l>>r>>a ;
    int m;int larg ;
    if(l<r){
        m=l ;
        larg=r;
    }else{
       m=r ;
       larg=l ;

    }
    if(m+a<=larg){
        cout<<(m+a)*2;
    }else{
        int x = (a+m)-larg;

        cout<<((larg)+x/2)*2;
    }
    return 0;
}
