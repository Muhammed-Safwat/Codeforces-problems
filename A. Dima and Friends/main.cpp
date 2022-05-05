#include <iostream>

using namespace std;

int main()
{
    int input, sum=0, n, counter=0;
	cin>>n;

	for(int i=0;i<n; i++){
		cin>>input;
		sum += input;
	}
	for(int i=1; i<=5; i++){
		if((sum + i)%(n+1) != 1)
			counter++;
	}
	cout<<counter;
    return 0;
}
