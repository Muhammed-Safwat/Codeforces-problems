#include <iostream>
#include <queue>
using namespace std;

int main()
{
    string s ;
    cin>>s;
    queue <char> ch ;
    ch.push(s.at(0));
    int c = 1;
    for(int i= 1 ;i<s.length();i++){
        if(ch.back()==s.at(i) && c<5){
            c++;
        }else{
           c=1;
           ch.push(s.at(i));
        }
    }
    cout<<ch.size();
    return 0;
}
