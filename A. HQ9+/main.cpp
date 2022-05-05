#include <iostream>

using namespace std;

int main()
{
    string str ;
    cin>>str ;
    int i = 0 ;
    for(i=0 ;i<str.length() ; i++ ){
        if(str.at(i)=='H' ||str.at(i)=='Q' || str.at(i)=='9' ){
                cout<<"YES";
                break;
        }
    }


    if(i==str.length()){
        cout<<"NO";
    }
    return 0;
}
