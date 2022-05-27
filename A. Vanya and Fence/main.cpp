#include <iostream>

using namespace std;

int main()
{
    int n, h ,sum=0;
    cin>>n>>h;
    for(int i =0 ;i<n ;i++){
        int temp;
        cin>>temp ;
        if(temp>h){
            sum+=2;
        }else{
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
