#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s ;
    int upper = 0 ,lower =0 ;
    cin>>s;
    for(int i = 0 ; i<s.length();i++){
        if(isupper(s.at(i))){
              upper++;
           }else lower++;
    }
    for(int i =0 ; i<s.length();i++){
        if(upper>lower){
            cout<<(char)toupper(s.at(i));
        }else{
            cout<<(char)tolower(s.at(i));
        }
    }
    return 0;
}
