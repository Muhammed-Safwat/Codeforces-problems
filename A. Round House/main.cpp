#include <iostream>

using namespace std;

int main()
{
    int n , a ,b ;
    cin>>n>>a>>b;
    int k = a;
    int x =abs(b)%n;
    if(b>0){
        while(x--){
            k++;
            if(k>n){
                k=1;
            }
        }
        cout<<k;
    }else {
        while(x--){
            k--;
             if(k<=0){
                k=n;
             }
            }
            cout<<k;
        }
    return 0;
}
