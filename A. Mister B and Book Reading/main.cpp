#include <iostream>

using namespace std;

int main()
{
    int c , v ,v1 ,a ,l ;
    cin>>c>>v>>v1>>a>>l;
    int sum=v , i=1 ;
    while(sum<c){
        if((v+a*i)<v1){
            sum+=(v+a*i)-l;
        }else{
            sum+=v1-l;
        }
        i++;
    }
    cout<<i;
    return 0;
}
