#include <iostream>

using namespace std;

int main()
{
    int arr[10]={2,7,2,3,3,4,2,5,1,2};
    int n ;
    cin>>n ;
    cout<<arr[(n%10)]*arr[(n/10)];

    return 0;
}
