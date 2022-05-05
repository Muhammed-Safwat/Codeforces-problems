#include <iostream>

using namespace std;

int main()
{
   long d1, d2 ,d3 ; long long int sum=0;
   cin>>d1>>d2>>d3;
   long mi ,ma;
   if(d1>d2){
     mi=d2;
     ma=d1;
   }else{
     mi=d1;
     ma=d2;
   }
   sum+=mi;
   if(mi+ma*2<=ma+d3){
    sum+=mi+ma*2;
   }else{
       sum+=d3;
     if(d3+mi<ma){
        sum+=d3+mi;
     }else{
        sum+=ma;
     }
   }
   cout<<sum;
       return 0;
}
