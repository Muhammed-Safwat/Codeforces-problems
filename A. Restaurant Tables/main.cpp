#include <iostream>

using namespace std;

int main()
{
    int n , a ,b ,x=0 ,c=0;
    cin>>n>>a>>b;
    int arr[n];
    for(int i= 0 ;i<n; i++){
        cin>>arr[i];
    }
    for(int i= 0 ;i<n; i++){
        if(arr[i]==1){
                if(a>0){
                    a--;
                }else if(a==0 && b>0){
                   x++;
                   b--;
                }else if (a==0 && b==0 && x>0){
                    x--;
                }else{
                    c++;
                }
        }else if(arr[i]==2){
            if(b>0){
                b--;
            }else{
                c+=2;
            }
        }
    }
    cout<<c;

    return 0;
}
