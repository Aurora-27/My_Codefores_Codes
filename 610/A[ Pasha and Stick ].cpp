#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n,ans;
	cin>> n;
	if(n<6)
	{
		ans=0;
		goto p;
	}
	if(n%2==0)
	{
		do
			n--;
		while(n%2!=0);
		ans = n/2;
		ans/=2;
	}
	//cout << n;
	else
	{
		ans = 0;
	}
	p:
	cout << ans <<endl;
	return 0;
}