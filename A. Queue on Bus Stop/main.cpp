#include <iostream>

using namespace std;

int main()
{
    int n , m ,c=0,temp=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i<n ;i++){
         if(temp+arr[i]>m){
            temp=arr[i];
            c++;
         }
         else temp+=arr[i];
    }
    cout<<c+1;


    return 0;
}
