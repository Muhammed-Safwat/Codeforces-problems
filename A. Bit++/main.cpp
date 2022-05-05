#include <iostream>

using namespace std;

int main()
{
    int n = 0 ;int x=0 ;
    cin>>n ;
    string arr[n];
    for(int i=0 ; i<n ; i++ ){
        string s ;
        cin>>s;
        for(int j =0 ; j<s.length();j++){
            if(s.at(j)=='+'){
                x++;\
                break;
            }else if(s.at(j)=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;


    return 0;
}
