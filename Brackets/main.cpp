#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long int
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
    stack<char> st;
    string s ;
    cin>>s;
    for(int i = 0 ;i<s.length() ;i++){
        if(st.empty() || s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else if(s[i]==')' && st.top()=='('){
            st.pop();
        }else if(s[i]==']' && st.top()=='['){
            st.pop();
        }else if(s[i]=='}' && st.top()=='{'){
            st.pop();
        }
    }
    if(st.size()==0){
        cout<<"yes";
    }else{
        cout<<"no";
    }


}
