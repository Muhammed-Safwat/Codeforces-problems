#include <iostream>

using namespace std;

int main()
{
    int n  , k  ,c=0;
    cin>>n>>k;
    for(int i=0 ; i<n ;i++){
        int s ,e ;
        cin>>s>>e;
        c+=(e-s+1);
    }
    c%=k ;
    cout<<c;
    if(c!=0)
        c=k-c;

    cout<<c;

    return 0;
}
