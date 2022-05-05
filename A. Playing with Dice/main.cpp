#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int a,b ; int ca=0 , cb= 0 ;int drow=0;
        cin>>a>>b;
        for(int i=1 ;i<=6 ;i++){
            if(abs(a-i) <abs(b-i)){
                ca++;
            }else if(abs(a-i) >abs(b-i)){
                cb++;
            }else{
                drow++;
            }
        }
        cout<<ca<<" "<<drow<<" "<<cb;




    return 0;
}
