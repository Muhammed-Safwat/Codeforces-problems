#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s3;
    int c1=0,c2=0,c3=0 ;
    getline(cin ,s1);
    getline(cin ,s2);
    getline(cin ,s3);

    for(int i=0 ;i<s1.length();i++){
        if(s1.at(i)=='u'||s1.at(i)=='i'||s1.at(i)=='o'||s1.at(i)=='e'||s1.at(i)=='a'){
            c1++;
        }
    }
    for(int i=0 ;i<s2.length() && c1==5 ;i++){
        if(s2.at(i)=='u'||s2.at(i)=='i'||s2.at(i)=='o'||s2.at(i)=='e'||s2.at(i)=='a'){
            c2++;
        }
    }
    for(int i=0 ;i<s3.length()&& c2==7;i++){
        if(s3.at(i)=='u'||s3.at(i)=='i'||s3.at(i)=='o'||s3.at(i)=='e'||s3.at(i)=='a'){
            c3++;
        }
    }
    if(c1==5 && c2==7 && c3==5){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}
