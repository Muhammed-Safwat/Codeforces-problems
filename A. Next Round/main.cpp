#include <iostream>

using namespace std;

int main()
{
    int n , k ,c=0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        int temp ;
        cin>>temp ;
        arr[i]=temp;
    }
     for(int i=0 ; i<n ;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            c++;
        }
     }
     cout<<c;
    return 0;
}
