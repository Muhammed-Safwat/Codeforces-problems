#include <iostream>

using namespace std;

int main()
{
    long long n ,  m ;
    long c =0 ;
    long long a[5]={0},b[5]={0};
    cin>>n>>m;
        for(long i=1 ; i<=n ;i++){
            a[i%5]++;
        }
        for(long j=1 ; j<=m ;j++){
            b[j%5]++;
        }
    cout<<a[0]*b[0] + a[1]*b[4] + a[2]*b[3] + a[3]*b[2] + a[4]*b[1];
    return 0;
}
