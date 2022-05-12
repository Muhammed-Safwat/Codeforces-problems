#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
     string s1 ,s2;
     cin>>s1>>s2;

     string   h1= s1.substr(0, 2);
     string  h2 = s2.substr(0, 2);
     string   m1= s1.substr(3, 5);
     string  m2 = s2.substr(3, 5);
     int oh=stoi(h1)-stoi(h2) ;
     int om =stoi(m1)-stoi(m2);
      if (om<0){
        oh--;
        om+=60;
    }
    if (oh<0){
        oh+=24;
    }
    if (oh<10 && om<10){
        cout<<0<<oh<<":"<<0<<om<<'\n';
    }
    if (oh<10 && om>=10){
        cout<<0<<oh<<":"<<om<<'\n';
    }
    if (oh>=10 && om<10){
        cout<<oh<<":"<<0<<om<<'\n';
    }
    if (oh>=10 && om>=10){
        cout<<oh<<":"<<om<<'\n';
    }
    return 0;
}
