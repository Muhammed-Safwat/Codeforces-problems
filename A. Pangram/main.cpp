#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n ; char ch [26]={0};bool a= true ;
    cin>>n ;
    string s ;
    cin>>s;
    if(n<26){
        cout<<"NO";
    }else {
        for(int i= 0 ; i<s.length()  ; i++ ){
            int x = tolower(s.at(i))-96;
            ch[x-1]++;
        }
        for(int i =0 ; i<26 ;i++ ){
            if(ch[i]<1){
                a=false ;
                break;
            }
        }
        if(a){
            cout<<"YES";
        }else {
            cout<<"NO";
        }
    }
    return 0;
}
