#include <iostream>
#include<bits/stdc++.h>
#define rep(a,b,x)      for(int i=b;i<x;i++)
using namespace std;

int fact(int n)
{
	int ans=1;
	rep(i,2,n+1)
	{
		ans*=i;
	}
	return ans;
}
int nCr(int n, int r)
{
	return (fact(n)/(fact(n-r)*fact(r)));
}
int main()
{
    string s1 ,s2 ;
    cin>>s1>>s2;
    int p1= 0 ,p2= 0 ,n1= 0,n2= 0,poor = 0 ;
    for(int i = 0 ;i<s1.length();i++){
        if(s1.at(i)=='+'){
            p1++;
        }else{
            n1++;
        }
    }
    for(int i = 0 ;i<s2.length();i++){
        if(s2.at(i)=='+'){
            p2++;
        }else if(s2.at(i)=='-'){
            n2++;
        }else {
            poor++;
        }
    }
    int u = p1 - p2;
    int v = n1 - n2;
    if(n1==n2 && p1==p2 && poor==0){
        cout << 1 << endl;
    }else if((p2 > p1 || n2 > n1)||u + v != poor){
        cout << 0 << endl;
    }else
		{
			int x=p1-p2;
			int y=n1-n2;
			double dif = nCr(poor,y)/(pow(2LL,poor));
			cout<<fixed<<setprecision(12)<<dif<<endl;
		}
    return 0;
}
