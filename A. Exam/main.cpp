#include <iostream>

using namespace std;

int main()
{
    int n , x =0 ;
    cin>>n ;
    if(n==1){
            x=1;
        cout<<1<<endl;
    }else if(n>1 && n<4){
        x=n-1;
        cout<<n-1<<endl;
    }else {
        x=n ;
        cout<<n<<endl;
    }
    int i =0 ,j=0 ;int a =x ;
    if(n==4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2;
    }else {
        for(int i=1 ;i<=n && a ;i+=2){
            cout<<i<<" ";
            a--;
        }
        for(int i=2 ;i<=n  && a ;i+=2){
            cout<<i<<" ";
            a--;
        }
    }

    return 0;
}
