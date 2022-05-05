#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int temp;
    int arr[3];
    for(int i=0 ;i<3 ; i++){
        cin>>arr[i];
    }
    sort(arr , arr+3);
    int sum = 0  ;
    sum+=arr[2]-arr[1];
    sum+=arr[1]-arr[0];
    cout<<sum;
    return 0;
}
