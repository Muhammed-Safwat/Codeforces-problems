#include <iostream>

using namespace std;

int main()
{
    int r , c ;
    bool a  = true ;

    cin>>r>>c;

    string arr[r][1];

    for(int i= 0 ; i<r ; i++){
           cin>>arr[i][0];
    }

    for(int i =1 ;i<r && r>2 ; i++){
        if(arr[i][0]==arr[i-1][0]){
            a=false;
            break;
        }
    }

    for(int i =0 ;i<r && a ;i++){
            char ch = arr[i][0].at(0);
        for(int j=0 ;j<c ; j++){
            if(arr[i][0].at(j)!=ch){
                a=false;
                break;
            }
        }
    }

    if(a){
      cout<<"YES";
    }else{
      cout<<"NO";
    }

    return 0;
}
