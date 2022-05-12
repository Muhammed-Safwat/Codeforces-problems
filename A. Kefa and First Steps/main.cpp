#include <iostream>

using namespace std;

int main()
{
    long n ;
    cin>>n ;
    long c =1 , k=1;
    long long  int curr=0 , last=0;
    cin>>curr;
    last = curr;
    for(int i=0 ;i<n-1;i++){
         cin>>curr;
         if(last<=curr){
            k++;
         }else{
           k=1;
         }
         if(k>c){
            c=k;
           }
         last = curr;
    }

    cout<<c;
    return 0;
}
