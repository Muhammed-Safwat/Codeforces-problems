#include <iostream>

using namespace std;

int main()
{
   int a , b,  c ;
   cin>>a>>b>>c ;
   int sum=0 , total=0  , t=c ,counter=0;
   total=a*c ;

   while(total-sum>(c*b)){
      sum+=b;
      counter++;
   }
   cout<<counter;
    return 0;
}
