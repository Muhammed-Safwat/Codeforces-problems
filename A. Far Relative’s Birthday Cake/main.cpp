#include <iostream>

using namespace std;
int sum(int n ){
return n*(n+1)/2;
}
int main()
{

    int n ;
    cin>>n ;int c=0 ;int total=0;
    char arr[n][n];
    for(int i =0 ; i<n  ;i++){
        for(int j=0 ;j<n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0 ; i<n  ;i++){
        for(int j=0 ;j<n ; j++){
            if(arr[i][j]=='C'){
                c++;
            }
        }

        total+=sum(c-1);
        c=0;
    }
      for(int i =0 ; i<n  ;i++){
        for(int j=0 ;j<n ; j++){
            if(arr[j][i]=='C'){
                c++;
            }
        }

        total+=sum(c-1);
        c=0;
    }

    cout<<total;

    return 0;
}
