#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string a ,r , l , b ;
    cin>>a;
    cin>>b;
    int index =a.find('|');
    r=a.substr(0 ,index);
    l=a.substr(index+1);
    int l3=b.length();
    for(int i=0 ; i<l3 ; i++){
        if(r.length()<=l.length()){
            r=r+""+b.at(i);
        }else if(r.length()>l.length()){
            l=l+""+b.at(i);
        }
    }
    if(r.length()==l.length()){
        cout<<r<<"|"<<l;
    }else{
        cout<<"Impossible";
    }
    return 0;
}
