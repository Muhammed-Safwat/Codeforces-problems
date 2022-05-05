#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s ;
    cin>>s;long c =0 ;
    long long int sum=0 ;
    string str =s ;
    if(s.length()>1){
    while(true){
        for(int i=0 ;i<str.length();i++){
            int x =str.at(i)-48;
            sum+=x;
        }
        c++;

        str=to_string(sum);
        sum=0;
        if(str.length()==1)break;

    }
       cout<<c;
    }else{
       cout<<c;
    }

    return 0;
}
