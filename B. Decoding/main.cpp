#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    string out="";
    out+=s.at(0);
   if(n%2==0){
        for(int i =1 ;i<s.length();i++){
            char ch=s.at(i) ;
            if(i%2==0){
                out=ch+out;
            }else{
                out=out+ch;
            }
        }
    }else{
         for(int i =1 ;i<s.length();i++){
            char ch=s.at(i) ;
            if(i%2==0){
                out=out+ch;
            }else{
                out=ch+out;
            }
        }
    }
    cout<<out;
    return 0;
}
