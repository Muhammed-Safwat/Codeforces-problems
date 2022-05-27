#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n ;
    long long  a=0  , b=0 ,temp;
    for(int i= 0 ; i< n ;i++){
        cin>>temp;
        a=a|temp;
    }
    for(int i= 0 ; i< n ;i++){
        cin>>temp;
        b=b|temp;
    }
    cout<<a+b;

    return 0;
}
