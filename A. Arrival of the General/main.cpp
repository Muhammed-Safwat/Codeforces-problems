#include <iostream>

using namespace std;

int main()
{
    int n ; int l=-9999999 , s=99999;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        int temp ;
        cin>>temp;
        arr[i]=temp;
        if(temp>l){
            l=temp;
        }
         if (temp < s){
            s=temp;
        }
    }
     int c = 0 , nl=0 , ns=0;
     for(int i=n-1 ; i>0 ; i--){

        if(arr[i]==s){
          ns=i;
           break;
        }else
        c++;


     }
     for(int i=0 ;i<n ;i++){

        if(arr[i]==l){
            nl=i;
           break;
        }else
          c++;

     }
     if(ns<nl)cout<<c-1 ;
     else cout<<c;
    return 0;
}
