#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n],b[n-1],c[n-2];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n-2; ++i)
	{
		cin >> c[i];
	}
	int ans = 0,anss = 0;
	for (int i = 0; i < n; ++i)
	{
		ans^= a[i];
		anss^= a[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		ans^= b[i];
	}
	for (int i = 0; i < n-2; ++i)
	{
		anss^= c[i];
	}
	anss^= ans;
	cout << ans << endl << anss;
	return 0;
}