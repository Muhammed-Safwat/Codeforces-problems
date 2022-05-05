
#include <iostream>
#include <cmath>
#define INT_MAX 2147483647

using namespace std;

int main()
{
    long n ;
    cin>>n ;
    string s ;
    cin>>s;
    int arr[n];

    for(int i = 0; i<n ; i++ ){
        int temp ;
        cin>>temp ;
        arr[i]=temp;
    }
    int t= INT_MAX;
    int m ;
    for(int i = 0 ; i<n-1 ; i++){
        if((s.at(i)=='R'&& s.at(i+1)=='L')){
           m=abs(arr[i]-arr[i+1])/2;

           if(m<t){
              t=m;
           }
    }
    }
    if(t==INT_MAX)cout<<-1;
    else cout<<t;

    return 0;
}
