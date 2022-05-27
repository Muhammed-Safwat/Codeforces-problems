#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long  n ,c=0;
    cin>>n ;
    long long int arr[n];
    for(auto i  =0 ; i<n ;i++){
        cin>>arr[i];
    }
    sort(arr ,arr+n);
    for(int i =1 ; i<n-1 ; i++){
         if(arr[i]>arr[0] && arr[i]<arr[n-1]){
            c++;
         }
    }
    cout<<c;

    return 0;
}
