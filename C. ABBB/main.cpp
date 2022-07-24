#include <iostream>
#include <stack>
using namespace std;

int main()
{
     int n;
    cin>>n;
    while(n){

    stack<char> ab ;
    string s ;
    cin>>s;
    for(int i= 0 ;i<s.length() ;i++){
        char ch = s.at(i);
        if (ch == 'A' || ab.empty())
                ab.push(ch);
            else if(ch=='B' && (ab.top()=='B' ||  ab.top()=='A' )) {
                ab.pop();
            }
    }
        n--;
            cout<<ab.size()<<endl;
     }

    return 0;
}
