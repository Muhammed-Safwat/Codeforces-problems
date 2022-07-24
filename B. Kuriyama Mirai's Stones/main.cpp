#include <bits/stdc++.h>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
   init();
   long n  ;
   cin>>n ;
   long long  arr[n], sortArr[n];
   for(int i = 0;i<n ;i++){
      cin>>arr[i];
      sortArr[i]=arr[i];
      if(i!=0)
      arr[i]+=arr[i-1];
   }
   sort(sortArr,sortArr+n);
   for(int i =0 ;i<n ;i++){
    if(i!=0)
      sortArr[i]+=sortArr[i-1];
   }
   int m ;
   cin>>m ;
   int t  , l , r ;
   long long int sum ;
   for(int i= 0 ;i<m ;i++){
            cin>>t>>l>>r;
            if(t==1){
                if(l==1){
                    cout<<arr[r-1]<<endl;
                }else{
                    cout<<arr[r-1]-arr[l-2]<<endl;
                }

            }else{
                if(l==1){
                    cout<<sortArr[r-1]<<endl;
                }else{
                    cout<<sortArr[r-1]-sortArr[l-2]<<endl;
                }
            }
    }
    return 0;
}
