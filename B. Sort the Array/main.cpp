#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int a[], int l , int r ,int n );
int main()
{
    int n ,temp , c ,a=0;
    bool bb = true ;
    cin>>n ;
    c=n;
    int arr[n],newArr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        newArr[i]=arr[i];
    }
    sort(newArr,newArr+n);

      int l = -1, r = -1;
        for(int i=0; i<n; i++)
            if(arr[i]!=newArr[i]){
                l = i;
                break;
            }

        for(int i=n-1; i>=0; i--)
            if(arr[i]!=newArr[i]) {
                r = i;
                break;
            }

             if(l==-1) {
                cout<<"yes\n1 1";

            }else{
            reverse(arr,l,r,n);

        for(int i=0; i<n; i++) {
            if(arr[i]!=newArr[i]) {
                cout<<"no";
                bb=false ;
                    break;
            }
        }
        if(bb){
        cout<<"yes\n";
        cout<<(l+1)<<" "<<(r+1);
}


}
    return 0;
}
void reverse(int a[],int l,int r ,int n) {
        int t[n];
        for(int i=l,j=r; i<=r; i++,j--) {
            t[i] = a[j];
        }

        for(int i=l; i<=r; i++)
            a[i] = t[i];
    }
