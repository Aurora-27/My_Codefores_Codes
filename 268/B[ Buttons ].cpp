#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	long long ans = 0,c=0;
	for (int i = n; i >0; --i)
	{
		ans+= (i-1)*c + i;
		c++;
	}
	cout << ans;
	return 0;
}
