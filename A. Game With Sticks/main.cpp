#include <iostream>

using namespace std;

int main()
{
    int n , m , x ;
    cin>>n>>m;
    x = min(n,m);
    if(x%2==0){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
    return 0;
}