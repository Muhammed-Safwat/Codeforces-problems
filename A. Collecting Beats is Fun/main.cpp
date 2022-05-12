#include <iostream>

using namespace std;

int main()
{
    int n ;bool s= true;
    cin>>n;
    int c= n*2;
    char arr[4][4];

    for(int i=0 ;i<4 ;i++){
        for(int j= 0 ;j<4 ;j++){
            cin>>arr[i][j];
        }
    }
    for(int k=1 ;k<=9 ;k++){
            c=n*2;
         for(int i=0 ;i<4 ;i++){
            for(int j=0 ;j<4 ;j++){
                int a =arr[i][j]-48 ;
                if(a==k){
                    c--;
                    if(c<0){
                        s=false ;
                        break;

                    }
                }
            }
        }
    }
    if(s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
