#include <iostream>

using namespace std;

int main()
{
    string a  ,  b ;int c= 0 ;
    cin>>a>>b;


            for(int i=0 ;i<a.length() ; i++){
                 if(a.at(i)==b.at(b.length()-1-i)){
                    c++;
                 }else{
                   break;
                 }
            }
            if(c==a.length()){
                cout<<"YES";
                }else{
                    cout<<"NO";
                    }


    return 0;
}
