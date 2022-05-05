#include <iostream>
#define PI 3.14159265358979323846
using namespace std;

int main()
{
    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double vol = (PI*d*d*e)/4;
    if(vol >= v){
        cout<<"NO\n";
        return 0;
    } else {
        cout<<"YES\n";
    }
    double t = ((PI*d*d*h)/4)/(v - vol);
    cout<<t<<"\n";
    return 0;

}
