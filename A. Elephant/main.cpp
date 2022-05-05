#include <iostream>

using namespace std;

int main()
{
    long long int n ; long long sum=0;
    cin>>n;
    while(n>0){
        sum++;
        n=n-5;
    }
      cout<<sum;
    return 0;
}
