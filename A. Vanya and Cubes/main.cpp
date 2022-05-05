#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int sum=0 , total=n ;int c=0;
    for(int i= 1 ;  ; i++){
            sum+=i;
       if(total-sum>=0){
          total-=sum;
          c++;
       }else{
           cout<<c;
           break;
       }
    }
    return 0;
}
