#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n ;
    long long sum =0 , k ;
    cin>>n>>k;
    int arr[n] ,arr2[n];
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr , arr+n );
    int c =0 ;
    for(int i =0 ; i<n ;i++){
        if(arr[i]+sum<=k){
           sum+= arr[i];
           c++;
        }
    }
    int index[c];
    for(int i =0 ;i<c;i++ ){
        for(int j =0 ; j<n ;j++){
            if(arr[i]==arr2[j]){
                index[i]=j+1;
                arr2[j]=-1;
                break;
            }
        }

    }
    cout<<c<<"\n";
    for(int i =0 ; i<c ;i++){
         cout<<index[i]<<" ";
    }



    return 0;
}
