#include <iostream>

using namespace std;

int main()
{
    string s ;
    cin>>s;
    long ones=0;
    for(int i = 0 ; i<s.length();i++){
        if(s.at(i)=='1'){
            ones++;
        }
    }
    int ans = s.length()/2;
     if (s.length() % 2 == 1 && ones > 1)
    {
        ans++;
    }
    cout << ans << "\n";

    return 0;
}
