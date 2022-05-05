#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; int c = 1, rang=0 ;
    cin>>n ;
    int arr1[n],arr2[n];int arr3[n];
    for(int i=0 ;i<n ;i++){
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }
    sort(arr2,arr2+n);
    reverse(arr2,arr2+n);

    for(int i=0 ;i<n ; i++){
            rang=c;
        for(int j=0 ;j<n ;j++){
            if(arr2[i]== arr1[j]){
                arr1[j]=0;
                arr3[j]=rang ;
                c++;
            }
        }
    }
    for(int i=0 ;i<n ; i++){
        cout<<arr3[i]<<" ";
        }
    return 0;
}
