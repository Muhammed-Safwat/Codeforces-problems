#include <iostream>

using namespace std;

int main()
{
    int n ,m  ;
    cin>>n>>m ;bool r =true , l=false;
    for(int i =1 ; i<=n ; i++){
            if(i%2==0){
                l=!l ; r=!r;
            }
        for(int j =1 ; j<=m ; j++){
                if(i%2!=0){
                    cout<<'#';
                }else{
                    if(j==m && l)
                    cout<<'#';
                    else if(j==1 && r)
                    cout<<'#';
                    else
                    cout<<".";
                }
        }

        cout<<"\n";
    }
    return 0;
}
