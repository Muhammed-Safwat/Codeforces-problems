#include <iostream>

using namespace std;

int main()
{
   int n ;int x=0 ;

   cin>>n;
   int y=n%7 ;
   char arr[7]={'R','O','Y','G','B','I','V'};
   if(n>4){
   for(int i= 0 ;i<n-y; i++){
            if(x==7)x=0;
            cout<<arr[x++];

   }
    x=3;
   for(int i= 0 ;i<y; i++){
            if(x==7)x=3;
            cout<<arr[x++];

   }


   }else{
         for(int i=0 ; i<n ;i++){
            cout<<arr[i];
         }
   }
    return 0;
}
