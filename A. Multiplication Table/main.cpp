#include <iostream>

using namespace std;

int main()
{
    long long n  ,x ;
    long long c=0 ;
    cin>>n>>x;

        for(int i=1 ; i<=n ;i++){
            if(x/i<=n && x%i==0){
                c++;
            }
        }
        cout<<c;

    return 0;
}
