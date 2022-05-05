#include <iostream>

using namespace std;

int main()
{
    int n , m ,c=0 ;
    cin>>n>>m ;

     while(n>0){

        n--;
        c++;
        if(c%m==0){
            n+=1;
        }
     }


    cout<<c;
    return 0;
}
