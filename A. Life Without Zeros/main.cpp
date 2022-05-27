#include <iostream>
#include <string>
using namespace std;
string removeZero(string s1 ,string s2);
string removeZeroSum(string sum);
int main()
{   string sum , a , b  ;
    cin>>a>>b;
    long long int x = stoll(a)+stoll(b);
    sum =to_string(x);

    if(removeZeroSum(sum)==removeZero(a,b)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0 ;
}
string removeZero(string s1 ,string s2){
    string newS1="", newS2 ="";
    for(int i = 0 ; i<s1.length();i++){
        if(s1.at(i)!='0'){
            newS1+=s1.at(i);
        }
    }
    for(int i = 0 ; i<s2.length();i++){
        if(s2.at(i)!='0'){
            newS2+=s2.at(i);
        }
    }
    return to_string(stoll(newS1)+stoll(newS2));
}
string removeZeroSum(string sum){
    string newsum ="";
     for(int i = 0 ; i<sum.length();i++){
        if(sum.at(i)!='0'){
            newsum+=sum.at(i);
        }
    }
    return newsum;
}

