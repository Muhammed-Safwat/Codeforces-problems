#include <iostream>

using namespace std;

int main()
{
    bool a = true;    int n ;
    cin>>n ;
    string s ;
    cin>>s;
    long r=0  ,l =0 ;
      for(int i =0 ; i<n  ; i++){
          if(s.at(i)-48 != 7 && s.at(i)-48 != 4){
             a=false ;
          }
      }

    for(int i =0 ; i<n && a  ; i++){
        if(i<n/2){
            l+=s.at(i)-48;
        }else if(i>=n/2){
            r+=s.at(i)-48;
        }
    }

    if(a && r==l){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}
