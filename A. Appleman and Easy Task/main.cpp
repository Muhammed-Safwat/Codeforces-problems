#include <iostream>

using namespace std;

int main()
{
    int n ,c =0 ;
    bool a =true;
    cin>>n;
    char arr[n][n];
    for(int i=0 ;i<n ;i++){
        for(int j =0 ;j<n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0 ;i<n-1 ;i++){
      int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i - 1 >= 0 and arr[i - 1][j] == 'o')
                c++;
            if (i + 1 < n and arr[i + 1][j] == 'o')
                c++;
            if(j - 1 >= 0 and arr[i][j - 1] == 'o')
                c++;
            if(j + 1 < n and arr[i][j + 1] == 'o')
                c++;
            if (c % 2 == 1)
                a = false;
        }
    }
    if(a){
        cout<<"YES";
    }else{
        cout<<"NO";
    }



    return 0;
}
