#include <iostream>

using namespace std;

int main()
{  int n ;
    cin>>n ;
    int arr[n][n];
    int arr1[n];
    for(int i=0 ;i<n ;i++){
            arr1[i]=1;
        for(int j=0 ;j<n ;j++){
            cin>>arr[i][j];
            if(arr[i][j]==-1||arr[i][j]==0) continue;
             if(arr[i][j]==3){ arr1[i]=0;arr1[j]=0;}
			else if(arr[i][j]==1) arr1[i]=0;
			else arr1[j]=0;
        }
    }

    int c =0;
    for(int i=0 ;i<n ;i++){
            if(arr1[i]==1)
            c++;
    }
        cout<<c<<"\n";
    for(int i=0 ;i<n ;i++){
        if(arr1[i]>0)
            cout<<i+1<<" ";
    }



    return 0;
}
