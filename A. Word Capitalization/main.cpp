#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string a ;
    cin>>a ;
    char ch = a.at(0);
    ch=toupper(ch);
    cout<<ch;
    for(int i=1 ; i<a.length() ; i++){
        cout<<a.at(i);
    }
    return 0;
}
