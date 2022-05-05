#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }
    bool a =true;
    sort(arr,arr+n);

    if(n>=2){
        for(int i=1 ;i<n ; i++){
        if(arr[i]!=arr[i-1]){
            cout<<arr[i];
            a=false;
            break;
            }
        }
    }
    if(a ||n<2){
        cout<<"NO";
    }
    return 0;
}
