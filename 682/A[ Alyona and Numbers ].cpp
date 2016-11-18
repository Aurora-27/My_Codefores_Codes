#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	long long ans=0;
	for(int i=1;i<=m;i++)
	{
		int p = 5 - i%5;
		//cout << p<< " "<<m;
		int M = n;
		if(p<=n)
		{
			M = n-p;
			ans++;
		}
		ans+=M/5;
	}
	cout  << ans;
	return 0;
}