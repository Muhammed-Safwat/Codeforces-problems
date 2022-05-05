#include <iostream>

using namespace std;

int main()
{
     long long int  n ;
     bool a  = false ;
     cin>>n ;

        for(int i=0 ; i<n ; i++){
            int temp1 ,temp2 ;
            cin>>temp1>>temp2;
            if(temp1!=temp2) a=true ;
        }
        if(a)cout<<"Happy Alex";
        else cout<<"Poor Alex";


    return 0;
}
