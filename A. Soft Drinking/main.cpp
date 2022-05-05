#include <iostream>

using namespace std;

int main()
{
    int n ,k ,l ,c ,d ,p ,nl , np ;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int aa , bb , cc ;
    aa=(k * l)/nl ;
    bb=(c * d);
    cc=p/np;
    int r=min(aa,min(bb,cc))/n;
    cout<<r;
    return 0;
}
