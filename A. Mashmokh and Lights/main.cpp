#include <iostream>

using namespace std;

int main()
{
     int n , bt ;
     cin>>n>>bt;
     int arr[n]={0};
     int temp;
     for(int i= 0; i<bt ; i++){
        cin>>temp;
        int j=temp-1;
        while(arr[j]==0){
            arr[j]=temp;
            j++;
        }
     }

     for(int i= 0; i<n ; i++){
            cout<<arr[i]<<" ";
     }
    return 0;
}
