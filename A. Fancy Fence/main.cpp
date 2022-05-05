#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i =0 ; i<n ; i++){
        int temp ;
        cin>>temp ;

    int j =3 ;
    int x = temp *j;
    int f = (j-2)*180;
    while(true){
        if(x==f){
            arr[i]="YES";
            break;
        }else if(f>x){
            arr[i]="NO";
            break;
        }
        j++;
         x = temp *j;
         f = (j-2)*180;
    }
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
