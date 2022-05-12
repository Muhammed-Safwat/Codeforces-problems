#include <iostream>

using namespace std;

int main()
{
    int n , m , k ;
    int c= 0;
    cin>>n>>m>>k;
    int arr[n];
    for(int i =0 ;i<n ; i++ ){
        cin>>arr[i];
    }
     for(int i =0 ;i<n ; i++ ){
        if(arr[i]==1){
            if(m>0){
                m--;
            }else{
               c++;
            }
        }else if(arr[i]==2){
            if(k>0){
                k--;
            }else if (m>0){
                m--;
            }else {
                c++;
            }
        }

    }
    cout<<c;

    return 0;
}
