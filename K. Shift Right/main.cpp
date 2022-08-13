#include <bits/stdc++.h>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    int n  , x ;
    cin>>n>>x;
    int arr[n];
    int temp ;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
     int mod = x ;
    if(x>=n)
    mod = x%n ;
    for(int i=0; i<mod; i++){
        int temp = arr[n-1];
        for(int j=n-1 ; j>=1 ; j--){
            arr[j]=arr[j-1];
        }
    arr[0]=temp;
    }
    for (int i = 0; i <n ; i++)
        cout << arr[i] << " ";

    return 0;
}
