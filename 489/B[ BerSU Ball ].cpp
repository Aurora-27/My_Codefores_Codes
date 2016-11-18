#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int girls[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> girls[i];
	}
	int m;
	cin >> m;
	int boys[m];
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin >> boys[i];
	}
	sort(girls,girls+n);
	sort(boys,boys+m);
	int pair = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; ++j)
		{
			if(abs(girls[i]-boys[j])<=1)
			{
				pair++;
				boys[j] = -8;
				break;
			}
		}
	}
	cout << pair;
	return 0;
}
