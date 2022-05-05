#include <iostream>

using namespace std;

int main()
{
    int n = 0 ; int c =0 ;
    cin>>n;
    for(int i = 0; i<n ; i++){
        int temp1,temp2;
        cin>>temp1>>temp2 ;
        if(temp1+2<=temp2){
            c++;
        }
    }
    cout<<c;
    return 0;
}
