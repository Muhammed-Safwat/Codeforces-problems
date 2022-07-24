#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long n ;
    bool a = false;
    cin>>n;
    long arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(int i =0 ; i<n-2 ; i++){
        if(arr[i]+arr[i+1]>arr[i+2]){
                a=true;
                break;
           }
    }

    if(a){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}
