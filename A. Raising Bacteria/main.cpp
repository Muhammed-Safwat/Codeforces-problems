#include <iostream>

using namespace std;

int main()
{
    long x ;
    cin>>x;
    long sum=1;
    long n=0;
        while(x>0){
            if(x%2!=0){
                n++;

            }
            x=x/2;
        }

           cout<<n;
    return 0;
}
