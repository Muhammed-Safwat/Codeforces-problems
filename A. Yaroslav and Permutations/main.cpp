#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
   int arr[n];
   for(int i = 0 ; i<n ;i++){
    int temp ;
    cin>>temp ;
    arr[i]=temp;
   }
   bool valid = true ;
   for(int i=0 ;i<n ; i++){
    int c=0 ;
    for(int j=0; j<n ;j++){
        if(arr[i]==arr[j]){
            c++;
        }
        if(n<c*2-1){
            valid=false;
            break;
        }
    }
   }
   if(valid){
    cout<<"YES";
   }else cout<<"NO" ;


    return 0;
}
