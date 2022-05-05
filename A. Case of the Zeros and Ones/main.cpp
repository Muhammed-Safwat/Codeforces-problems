#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long x ;
    cin>>x ;
    int zero = 0 ;
    int one = 0 ;
    string s ;
    cin>>s ;
      for(int i =0 ; i<x ; i++ ){
        if(s.at(i)=='0'){
            zero++;
        }else if(s.at(i)=='1'){
            one++;
        }
      }
      cout<<abs(zero-one);

     return 0;
}
