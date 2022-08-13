#include <bits/stdc++.h>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
using namespace std;

int main()
{
    string s ;
    cin>>s;
    int arr[s.length()+1]={0};

    for(int i =1 ;i<=s.length() ;i++){
       if(s[i-1]==s[i-2]){
            arr[i]++;
        }
        arr[i]+=arr[i-1];
    }
    int n ;
    cin>>n ;
    for(int i =1 ;i<=n ;i++){
        int r , l  ;
        cin>>l>>r;
        cout<<arr[r]-arr[l]<<endl;
    }
      /* for(int i =1 ;i<=s.length() ;i++){
        cout<<arr[i]<<" ";
    }*/

   return 0;
}
