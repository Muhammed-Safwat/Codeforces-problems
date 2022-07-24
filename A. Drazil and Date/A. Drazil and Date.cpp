// A. Drazil and Date.cpp  
#include <string>
#include <cmath>
#include <iostream>
using namespace std; 
int main()
{
	string a, b, s;
	cin >> a >> b >> s;
	
	if (stoll(s) >abs(stoll(a)) + abs(stoll(b)) &&(abs(stoll(a)) + abs(stoll(b))- stoll(s))% 2 == 0) {
		cout << "Yes";
	}
	else if (abs(stoll(a)) + abs(stoll(b)) == stoll(s)) {
		cout<<"Yes";
	}else{
			cout<< "No";
		}
	return 0; 
}

 