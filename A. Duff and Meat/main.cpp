#include <iostream>

using namespace std;

int main()
{
    long n , mi=99999999999 , sum=0 ;
    cin>>n;
   int arr[n][2];
   for(int i=0 ;i<n ;i++){
     cin>>arr[i][0]>>arr[i][1];

   }
    for(int i=0 ;i<n ;i++){
        if(arr[i][1]<mi){
            mi=arr[i][1];
        }
        sum+=arr[i][0]*mi;
   }
   cout<<sum;

    return 0;
}
