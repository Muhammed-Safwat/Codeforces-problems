#include <iostream>
#include<string>
using namespace std;

int main()
{
     int n;
	cin>>n;
    if(n>=0)
    {
        cout<<n;
    }

	else
	cout<<max(n/10,(n/100)*10+n%10);

    return 0;
}
