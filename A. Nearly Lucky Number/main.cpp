#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s ;int seven=0;int four=0;
    cin>>s;
    bool a= true;
        for(int i =0 ; i<s.length() ;i++){
            if(s.at(i)!='4'  &&  s.at(i)!='7'){
                a=false;
            }else if(s.at(i)=='4' ){
                four++;
            }
            else if( s.at(i)=='7' ){
                seven++;
            }
        }

    if((a && s.length()>1) || (four+seven==4 || four+seven==7) && (seven>0 && four>0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
