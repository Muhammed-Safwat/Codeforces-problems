#include <iostream>

using namespace std;

int main()
{   string s="" ;
    int n ;
    cin>>n;
    for(int i=1  ; i<=n ; i++){
        s+=to_string(i);
    }
    cout<<s.at(n-1);
    return 0;
}
