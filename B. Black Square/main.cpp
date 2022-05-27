#include <iostream>

using namespace std;

int main()
{
    int nB=0 ,nW=0 ;
    int n,m ;
    cin>>n>>m ;
    char arr[n][m];
    for(int i=0 ;i<n ;i++){
        for(int j =0 ;j<m ;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='B'){
                nB++;
            }else nW++;
        }
    }
    if(nW==(n*m))
    {
        cout<<"1";
        return 0;
    }

    if(nB==(n*m))
    {
        if(n==m)
            cout<<"0";
        else
            cout<<"-1";

        return 0;
    }

    if(nB==1)
    {
        cout<<"0";
        return 0;
    }
    int maxR =0 ,   minR = 100000;
    for(int i=0 ;i<n ;i++){
        for(int j = 0 ;j<m ;j++){
            if(arr[i][j]=='B'){
               if(i>maxR){
                    maxR=i;
                }if(i<minR){
                    minR=i;
                }
            }
        }
    }
    int maxC =0 , minC =100000;
     for(int i=0 ;i<m ;i++){
        for(int j = 0 ;j<n ;j++){
            if(arr[j][i]=='B'){
                if(i>maxC){
                    maxC=i;
                }
                if(i<minC)minC=i;
            }
        }

    }

    int x = max(maxC-minC+1,maxR-minR+1);
    if(n*m<x*x || x>n || x>m){
        cout<<-1;
    }else if(nB==0){
        cout<<1;
    }else {
        cout<<x*x-nB;
    }

    return 0;
}
