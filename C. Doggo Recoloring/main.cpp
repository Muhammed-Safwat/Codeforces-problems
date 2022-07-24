#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    if(s.length()==1){
        cout<<"Yes";
        return 0 ;
    }
    bool a = false ;
    int arr[27]={0};
    for(int i= 0 ;i<n ;i++){
        int ch = s[i]-96;
        if(arr[ch]>0){
            a=true;
            cout<<"Yes";
            break;
        }else{
            arr[ch]++;
        }
    }
    if(!a){
        cout<<"No";
    }
    return 0;
}
