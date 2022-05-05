#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n  , k  , c=0;
    long sum =0 ;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ;i<n ;i++ ){
        cin>>arr[i];
        sum+=arr[i];
    }
    c=abs(sum)/k ;
    if(abs(sum)%k!=0){
        cout<<c+1;
    }else{
        cout<<c;
    }
    return 0;
}
