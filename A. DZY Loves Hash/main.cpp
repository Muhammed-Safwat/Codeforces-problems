#include <iostream>

using namespace std;

int main()
{
    long long n, p ;
    cin>>p>>n;
    long long arr[n];
    long long hashTable[p];
    long long c = 0 , x;

    for(int i=0 ;i<n;i++){
            cin>>arr[i];

    }
    for(int i=0 ;i<p;i++){
            hashTable[i]=-1;
    }

     for(int i=0 ;i<n;i++){
        int x = arr[i]%p;
        if(hashTable[x]==-1){
                c++;

                hashTable[x]=x;
        }else{
           break;
        }
    }
     if(c==n){
        cout<<-1;
     }else
     cout<<c+1;

    return 0;
}
