#include <iostream>

using namespace std;
int isPrime(int n ){
    bool prime=true;
  for(int i = 2; i <= n / 2; i++) {
      if(n % i == 0) {
         prime=false;
      }
   }

 return prime;}
int findPrimeNumber(int n ,int m){
      for(int i=n+1 ; i<=m ; i++ ){
        if(isPrime(i)){
          return i;
        }
      }
 }

int main()
{
    bool f =false;
    int n ;int m ;
    cin>>n>>m;
    int a =findPrimeNumber(n,m);
     if(a==m){
        cout<<"YES";
     }else{
        cout<<"NO";
     }


    return 0;
}
