#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long cur = 2;
	if(n<2)
	{
		cout << 2 << endl;
		return 0;
	}
	for(long long int i = 1;i<=n;i++)
	{
		if(i==1)
		{
			cout << 2 << endl;
			continue;
		}
		//long long hcf = __gcd(i,i+1);
		long long lcm = (i)*(i+1);
		long long target = i*(i+1)*(i+1) - cur/i;
		//if(i == n)
		//cout << lcm*lcm;
		//long long num = target/i ;
		cout << target << endl;
		cur = lcm;
	}
	return 0;
}
