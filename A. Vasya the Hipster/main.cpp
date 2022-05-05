#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin>>a>>b ;
    int small , larg ;
    if(a>b){
        larg=a ;
        small=b;
    }else{
        larg=b;
        small=a ;
    }
    cout<<small<<" ";
    cout<<(larg-small)/2;


    return 0;
}
