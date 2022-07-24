// A. Business trip.cpp  
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int k; 
	cin >> k; 
	bool a = false; 
	long arr[12];
	for (int i = 0; i < 12; i++) {
		cin >> arr[i];
		if (arr[i] == k || arr[i] > k) {
			a = true;
		}
	}
	if(!a){ 
		int c = 0; long sum = 0;
		int i = 11; 
		sort(arr, arr + 12);
		while (sum < k && i>-1) {
				sum += arr[i--];
				c++;
			 }
		if (sum >= k)
			cout << c;
		else cout << -1;
	}
	else {
		if (k == 0)cout << 0;
		else cout << 1;
	}
	return 0; 
}

 
