#include <bits/stdc++.h>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}


int main()
{
    init();
    long n ;
    cin>> n;
    long arr[n+1]={0};
    long c= 0 , m=0;
    for(int i = 0 ;i<2*n ;i++){
        long temp ;
        cin>>temp;
        if(arr[temp]==0){
            arr[temp]=1;
            c++;
        }else if(arr[temp]==1){
            c--;
            arr[temp]=0;
        }
        m=max(c,m);
    }
    cout<<m;
    return 0;
}
