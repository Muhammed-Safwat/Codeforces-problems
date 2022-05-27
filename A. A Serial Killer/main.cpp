#include <iostream>

using namespace std;

int main()
{
    string p1 ,p2 ;
    cin>>p1>>p2;
    int n ;
    cin>>n;
    string arr[n+1][2];
    arr[0][0]=p1 ;
    arr[0][1]=p2 ;
    for(int i =1 ; i<n+1 ;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    cout<<p1<<" "<<p2<<"\n";
    for(int i =1 ; i<=n+1 ;i++){
        if(arr[i][0]==arr[i-1][0]){
            cout<<arr[i][1]<<" "<<arr[i-1][1]<<"\n";
             arr[i][0]=arr[i-1][1];
        }else if(arr[i][0]==arr[i-1][1]){
            cout<<arr[i][1]<<" "<<arr[i-1][0]<<"\n";
            arr[i][0]=arr[i-1][0];
        }else if(arr[i][1]==arr[i-1][0]){
            cout<<arr[i-1][1]<<" "<<arr[i][0]<<"\n";
            arr[i][1]=arr[i-1][1];
        }else if(arr[i][1]==arr[i-1][1]){
            cout<<arr[i][0]<<" "<<arr[i-1][0]<<"\n";
            arr[i][1]=arr[i-1][0];
        }
    }


    return 0;
}
