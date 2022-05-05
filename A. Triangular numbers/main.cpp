#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
     int sum=0;
    bool a=false;
    for(int i =1 ;i<=n ;i++){
        sum+=i;
        if(sum==n){
            a=true;
            break;
        }
    }
    if(a){
        cout<<"YES";
    }else{
         cout<<"NO";
    }
    return 0;
}
