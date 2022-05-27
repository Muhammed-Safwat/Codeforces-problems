#include <iostream>

using namespace std;

int main()
{
    long long int n , m ,index;
    bool a = true;
    cin>>n ;
    long long int arr[n];
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
        if(arr[i]<m){
            m=arr[i];
            index=i;
        }
    }
    for(int i =0 ;i<n ;i++){
        if(arr[i]==m && i!=index){
            a=false ;
            break;
        }
    }
    if(a){
        cout<<index+1;
    }else {
        cout<<"Still Rozdil";
    }
    return 0;
}
