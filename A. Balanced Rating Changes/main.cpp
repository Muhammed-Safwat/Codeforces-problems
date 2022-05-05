#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x =1;
    for(int i=0 ; i<n ; i++){
         int temp;
         cin>>temp ;
          if(temp%2==0){
            arr[i]=temp/2;
          }else{
            arr[i]=(temp+x)/2;
            x*=-1;
          }
        }
         for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<"\n";
         }

    return 0;
}
