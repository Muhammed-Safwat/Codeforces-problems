#include <iostream>

using namespace std;

int main()
{
   int n , step ;
   cin>>n>>step ;
   int G, T;
   bool a =false;
   char arr[n];
       for(int i =0 ; i<n ; i++){
            cin>>arr[i];
            if(arr[i]=='G') G=i;
            if(arr[i]=='T') T=i;

       }

        if(G>T){
            for(int i=G ; i>=0  ;i-=step){
                if(arr[i]=='T'){
                    a=true;
                }else if(arr[i]=='#'){
                    break;
                }
            }
        }else if(G<T){
            for(int i =G ; i<n ; i+=step){
                if(arr[i]=='T'){
                    a=true;
                }if(arr[i]=='#'){
                    break;
                }
            }
        }
        if(a){
            cout<<"YES";
        }else{
            cout<<"NO";
        }

    return 0;
}
