#include <iostream>
using namespace std;

int main()
{
    int n ;int c =0 ; int sum=0;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0; i<n ;i++){
        int dif=sum-arr[i];
        if(dif%2==0 || dif==0){
            c++;
        }
    }
    cout<<c;

    return 0;
}
