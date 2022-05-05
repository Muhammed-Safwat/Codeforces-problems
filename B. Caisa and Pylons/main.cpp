#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n ; long sum =0 ;
    long en=0 ;
    cin>> n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1 ; i<=n ;i++ ){
        cin>>arr[i];
    }
    for(int i=0 ; i<n  ; i++){
        if(arr[i+1]<arr[i]){
            en+=arr[i]-arr[i+1];
        }else if(arr[i+1]>arr[i]){
            int dif=arr[i+1]-arr[i];
            if(en==0){
                sum+=dif;
            }if(en>0 && en<dif){
                sum+=dif-en;
                en=0;
            }else if(en>=dif){
                en-=dif;
            }
        }
    }
    cout<<sum ;


    return 0;
}
