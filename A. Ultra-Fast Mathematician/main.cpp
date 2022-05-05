#include <iostream>

using namespace std;

int main()
{
    string a , b ;
    cin>>a>>b;
    string out="";
    for(int i =0 ;i<a.length();i++){
        if(a.at(i)== b.at(i)){
            out=out+'0';
        }else{
            out=out+'1';
        }
    }
    cout<<out;
    return 0;
}
