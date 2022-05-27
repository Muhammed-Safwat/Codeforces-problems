#include <iostream>

using namespace std;

int main()
{
    int n , c= 0 ;
    cin>>n ;
    int arr[n];
    for(int i =0 ;i<n ; i++) {
        cin>>arr[i];
    }
    if(arr[0]==1){
        c++;
    }

    for(int i = 1 ;i<n-1 ;i++){
        if(arr[i]==0 && i==n-1 ){
            continue;
        }else if( arr[i]==0 && arr[i-1]==0  ){
            continue;
        }else if( arr[i]==0 && arr[i+1]==0 ){
            continue;
        }else{
            c++;
        }
    }
    if(arr[n-1]==1 && n!=1){
        c++;
    }
    cout<<c;
    return 0;
}
