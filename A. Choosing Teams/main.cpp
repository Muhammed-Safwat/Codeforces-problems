#include <iostream>

using namespace std;

int main()
{
    int c =0 ;
    int n, k ;
    cin>>n>>k;
    for(int i=0 ;i<n; i++){
        int temp ;
        cin>>temp;
        if(temp!=5 && 5-temp>=k){
            c++;
        }
    }
    cout<<c/3;

    return 0;
}
