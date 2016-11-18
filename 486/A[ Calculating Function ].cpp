#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long sum=0;
	if(n%2==0)
		cout<<n/2;
	else
		cout << -1*((n-1)/2+1);
	return 0;
}