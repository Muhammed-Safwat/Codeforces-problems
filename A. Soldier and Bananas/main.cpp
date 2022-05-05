#include <iostream>

using namespace std;

int main()
{
  int k , w ;
  long long int  n  ,sum =0;
  cin>>k>>n>>w;
  for(int i=1 ;i<=w ; i++){
    sum+=i*k;
  }
  if(sum<n)cout<<0;
  else
  cout<<sum-n;
    return 0;
}
