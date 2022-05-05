#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    int s,e;
    cin>>s>>e;
    int mi , ma ;
    if(s>e){
        mi=e;
        ma=s;
    }else{
       mi=s;
       ma=e;
    }
    int k = mi ;
    int dis1=0 ,dis2=0;
    while(k<ma){
        dis1+=arr[k-1];
        k++;
    }
    k=mi-1;
    while(k!=ma-1){
        if(k==0){
            k=n;
        }
        dis2+=arr[k-1];
        k--;
    }

    cout<<min(dis1,dis2);

    return 0;
}
