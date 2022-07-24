#include <iostream>

using namespace std;

int main()
{
    double vp , vd , t , f , c , dp;
    int ans = 0;
    cin>>vp>>vd>>t>>f>>c;
    dp = t * vp;
    if(vd < vp){
        cout<<0;
        return 0 ;
    }
    while(dp < c)
    {
        double td = dp / (vd - vp);
        dp += td * vp;
        if(dp >= c)
            break;
        double t_back = dp / vd + f;
        dp = dp + t_back * vp;
        ++ans;
    }
    cout<<ans;
    return 0;
}
