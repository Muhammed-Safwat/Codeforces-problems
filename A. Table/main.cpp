#include <iostream>

using namespace std;

int main()
{
    int n , m  ;
    cin>>n>>m;
    bool a = false;
    int arr[n][m];
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0 ;i<m ;i++){
        if(arr[0][i]||arr[n-1][i]){
            a=true;
        }
    }
    for(int i=0 ; i<n ;i++){
        if(arr[i][0]|| arr[i][m-1])
            a=true;
    }
    if(a){
        cout<<2;
    }else{
        cout<<4;
    }


    return 0;
}
