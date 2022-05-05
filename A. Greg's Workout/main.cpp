#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;int arr[n];
    int chest=0  , bi=0 , bac=0 ;
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ;i=i+3){
        chest+=arr[i];
    }
    for(int i=1 ; i<n ;i=i+3){
        bi+=arr[i];
    }
    for(int i=2 ; i<n ;i=i+3){
        bac+=arr[i];
    }

    if(chest > bi && chest > bac){
        cout<<"chest";
    }else if(bi > chest && bi >bac ){
        cout<<"biceps";
    }else if(bac > chest && bac > bi){
        cout<<"back";
    }
    return 0;
}
