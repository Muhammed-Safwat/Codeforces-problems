#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  long n ;
  cin>>n;
  long arr[n];
  long values[100005];
  for(int i=0 ; i<n ;i++){
    cin>>arr[i];
    values[arr[i]]=i;
  }
  int x ;
  cin>>x; long temp;
   long long  a=0 , b=0 ;
  for(int j=0 ; j<x ;j++){
    cin>>temp ;
    long w=values[temp];

           a+=w+1;
           b+=n-w;
    }


  cout<<a<<" "<<b;



    return 0;
}
