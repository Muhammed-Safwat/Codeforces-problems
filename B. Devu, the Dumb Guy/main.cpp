#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n ;
     long long int x;
     cin>>n>>x ;

    long arr[n];
   for(int i =0 ;i<n ; i++){
        int temp ;
        cin>>temp ;
        arr[i]=temp;
   }
   sort(arr, arr+n);
     long long int sum=0;
   for(int i = 0; i<n ; i++){
    sum+=(long)arr[i]*x;
    if(x>1){
        x--;
    }
   }
   cout<<sum;

    return 0;
}
