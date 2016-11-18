#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int h,t;
	cin >> h >> t;
	long long ans = 0,cur = 1;
	while(t--)
	{
		int p;
		cin >> p;
		if(cur<=p)
		{
			ans+= p - cur;
			cur = p;
		}
		else
		{
			p+= h;
			ans+= p - cur;
			cur = p - h;
		}
	}
	cout << ans;
	return 0;
}
