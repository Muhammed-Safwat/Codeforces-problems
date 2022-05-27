#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n , c=0 ;
    cin>>n ;
    string s,output="" ;
    cin>>s;
    for(int i= 0 ; i<n ;i++){
        if(s.at(i)=='1'){
            c++;
        }else if(s.at(i)=='0' && s.at(i-1)=='0'){
            output+=to_string(0);
        }else{
           output+=to_string(c);
           c=0;
        }
    }
    output+=to_string(c);
    cout<<output;
    return 0;
}
