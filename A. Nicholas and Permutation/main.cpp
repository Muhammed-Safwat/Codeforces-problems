#include <iostream>

using namespace std;

int main()
{
     int n , ma,mi ,ind1 ,ind2;
     cin>>n ;
     mi=1; ma=n ;
     int arr[n];
     for(int i=0 ;i<n ;i++){
        cin>>arr[i];
        if(arr[i]==mi){
                ind1=i+1;

        }else if(arr[i]==ma){
                ind2=i+1;
        }
     }

       int x = max(n+1-max(ind1,ind2) , min(ind1,ind2))-1;
     cout<<x+abs(ind1-ind2);


    return 0;
}

