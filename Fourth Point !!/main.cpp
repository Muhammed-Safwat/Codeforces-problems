#include <iostream>

using namespace std;

int main()
{   double x[3];
    double y[3];
     double xx ,yy ;
        cin>>xx>>yy ;
        x[0]=xx;
        y[0]=yy;
    for(int i=1 ; i<4 ; i++){
        double xx ,yy ;
        cin>>xx>>yy ;
        if(xx==x[i-1] && yy==y[i-1]){
            continue;
        }else{
              x[i]=xx ;
              y[i]=yy;
              }
        }
  for(int i=1 ; i<4 ; i++){
    cout<<x[i]<<" "<<y[i];
  }


    return 0;
}
