#include <iostream>

using namespace std;

int main()
{
   int n ,even=0 , odd=0;
   cin>>n ;
   int arr[n];
   for(int i =0 ;i<n ; i++ ){
      int temp ;
      cin>>temp;
      arr[i]=temp;
      if(temp%2==0){
        even++;
      }else{
        odd++;
      }
   }
    for(int i =0 ; i<n ;i++){
        if(odd<even){
            if(arr[i]%2!=0){
                cout<<i+1;
                break;
            }
        }else if(even<odd){
            if(arr[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}
