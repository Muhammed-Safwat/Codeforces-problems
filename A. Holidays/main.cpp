#include <iostream>

using namespace std;

int main()
{
    long long int n ;
    cin>>n ;
    if(n==1){
        cout<<0<<" "<<1;
    }else{
    long m1=0 , m2=0;
     bool a = true;
     bool b = false;
     long long int x = n ;
     while(x>0){
        if(a){
            if(x>0){
                x--;
                m1++;
            }
            if(x>0){
                x--;
                m1++;
            }
            b=true;
            a=false;
        }else if(b){
            x-=5;
            b=false;
            a=true;
        }
     }
            b=true;
            a=false;x=n;
     while(x>0){
        if(a){
            if(x>0){
                x--;
                m2++;
            }
            if(x>0){
                x--;
                m2++;
            }
            b=true;
            a=false;
        }else if(b){
            x-=5;
            b=false;
            a=true;
        }
     }

      cout<<min(m1,m2)<<" "<<max(m1,m2);
      }
    return 0;
}
