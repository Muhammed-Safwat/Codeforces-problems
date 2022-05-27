#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int  a1 ,a2 ,a3;
    cin>>a1>>a2>>a3;
    long long int x1 , x2 ,x3 ;
    x1= sqrt((a1*a2)/a3) ;
    x2= sqrt((a1*a3)/a2) ;
    x3= sqrt((a3*a2)/a1) ;
    cout<<x1*4+x2*4+x3*4;
    return 0;
}
