#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int c=0;
    long b  , a ;
    for(int i =0 ; i<n ; i++){
        string s ;
        cin>>s ;
        cin>>b>>a;
        if(b>=2400 && a>b) {
            c++;
        }
    }
    if(c>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
