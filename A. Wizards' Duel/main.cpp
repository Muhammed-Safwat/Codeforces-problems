#include <iostream>

using namespace std;
int nearest(int a , int b){
    int d1=abs(a-b);
    int d2=(min(a,b)-0)+(9-max(a,b))+1;
    return min(d1,d2);
}
int main()
{
    int n ; int sum=0;
    cin>>n;
    string s1 ,s2 ;
    cin>>s1>>s2;
    for(int i =0 ; i<n ;i++){
        sum+=nearest(s1.at(i),s2.at(i));
    }
    cout<<sum;
    return 0;
}
