#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s3,s4;
    int a=0;
    cin>>s1>>s2>>s3;
    s4=s1+s2;
    int n =s1.length()+s2.length();
    if(n==s3.length()){
        for(int i=0; i<n ;i++){
            for(int j=0 ;j<n ;j++){
               if(s4.at(i)==s3.at(j)){
                    s3.at(j)='*';
                    a++;
                    break;
               }
            }
        }
    }
    if(a==n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
