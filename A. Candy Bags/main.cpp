#include <iostream>

using namespace std;

int main()
{
    int n,l=0 ,k=0 ;
    cin>>n ;
    l=(n*n/2)+1;
    k=(n*n/2);
    for(int i =1 ;i<=n ;i++){
        for(int j=1 ; j<=n/2 ;j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=1 ; j<=n/2 ;j++){
            cout<<l<<" ";
            l++;
        }


        cout<<"\n";
      }

    return 0;
}
