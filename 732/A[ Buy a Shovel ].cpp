#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k;
	cin >> n >> k;
	int ans = 10;
	for(int i = 1;i<10;i++)
	{
		if((n*i)%10 == 0 or ((n*i))%10==k)
		{
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}