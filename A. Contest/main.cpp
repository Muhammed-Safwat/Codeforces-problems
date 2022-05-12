#include <iostream>

using namespace std;

int main()
{
    int a , b ,c ,d ;
    cin>>a>>b>>c>>d ;
    int val1 , val2;
    val1=max( a*3/10 , a - (a/250) * c );
    val2=max( b*3/10 , b - (b/250) * d );
    if(val1>val2){
        cout<<"Misha";
    }else if (val2>val1){
        cout<<"Vasya";
    }else{
        cout<<"Tie";
    }
    return 0;
}
