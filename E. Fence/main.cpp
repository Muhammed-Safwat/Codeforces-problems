#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
    int n, k;
	cin >> n >> k;
	int arr[n+1] = { 0 };
	int l = 0, z, t = 15000001;
    int time[n+1];

	for (int i = 1;i <= n;i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> time[i];
	}
	for (int i = k;i <= n;i++)
	{
		if (t > arr[i] - arr[i - k])
		{
			t = arr[i] - arr[i - k];
			z = i;
		}


	}
	int x = z - k + 1;
	int sum= t ;
	for(int i =1 ; i<=n ;i++){
        if(time[i]==1 && i<x){
            sum+=arr[i];
        }
        else if(i==x){
            i+=3;
        }
	}
	cout<<sum;


    return 0;
}
