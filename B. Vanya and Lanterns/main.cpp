#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	long long l;
	long double maxdist = -100.0000000000;
	int n;

	cin >> n >> l;

	long double* arr = new long double[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n - 1; i++)
		maxdist = max(maxdist, (arr[i + 1] - arr[i]) / 2);

	maxdist = max(maxdist, max(arr[0] - 0, l - arr[n - 1]));

	cout << setprecision(10) << fixed;
	cout << maxdist;

	return 0;
}
