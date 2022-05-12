#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   string s;
    cin>>s;
    string st="hello";
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==st[c]){
            c++;
        }
    }
    if(c==5){
        cout<<"YES" ;
    }
    else{
        cout<<"NO" ;
    }
    return 0;
}
