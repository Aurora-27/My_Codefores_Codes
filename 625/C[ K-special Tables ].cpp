#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int arr[n][n];
	int cur = n*n;
	int ans = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = n-1;j>=k-1;j--)
		{
			arr[i][j] = cur;
			if(j==k-1)
				ans+= cur;
			cur--;
		}
	}
	for(int i =0;i<n;i++)
	{
		for(int j= k-2;j>=0;j--)
		{
			arr[i][j] = cur;
			cur--;
		}
	}
	cout << ans << endl;
	for(int i =0;i<n;i++)
	{
		for(int j =0;j<n;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}