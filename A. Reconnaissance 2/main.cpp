#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ;i<n ;i++){
        cin>>arr[i];
    }
    int mi =abs(arr[0]-arr[n-1]);
    int a=1, b = n ;
    for(int i = 0 ;i<n-1 ;i++){
        if(abs(arr[i]-arr[i+1])<mi){
            mi=abs(arr[i]-arr[i+1]);
            a=i+1; b = i+2;
        }
    }
    cout<<a<<" "<<b;

    return 0;
}
