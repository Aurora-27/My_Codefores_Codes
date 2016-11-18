#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long n,x;
	cin >> n >> x;
	long long dis=0;
	while(n--)
	{
		char c;
		long long tmp;
		cin >> c >> tmp;
		if(c==&#39;-&#39;)
		{
			if (tmp<=x)
				x-=tmp;
			else
				dis++;
			
		}
		if(c==&#39;+&#39;)
		{
			x+=tmp;
		}
	}
	cout << x << " "<<dis<<endl;
	return 0;
}