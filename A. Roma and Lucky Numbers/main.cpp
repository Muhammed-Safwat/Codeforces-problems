#include <iostream>

using namespace std;
int luckyNumber(long long int n){
    int rem;
    long long int x=0;
     while(n>0){
                rem=n%10;
                if(rem==7||rem==4)x++;
                n=n/10;
            }

    return x;
 }
int main()
{

    int n ;
    long long int k ;int c=0;
    cin>>n>>k;
    for(int i=0 ;i<n ;i++){
        long long temp;
        cin>>temp;
        long long int x = luckyNumber(temp);
         if(x<=k){
            c++;
         }
    }
    cout<<c;
    return 0;
}
