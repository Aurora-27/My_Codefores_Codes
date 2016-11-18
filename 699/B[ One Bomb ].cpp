#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[1005][1005], row[1005],col[1005];
int main() {
	int n,m;
	cin >> n >>m;
	int totl=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		for(int j=0;j<m;j++)
		{
			if(s[j]==&#39;*&#39;)
			{
				row[j]++;
				col[i]++;
				arr[i][j]++;
				totl++;
			}
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(row[j]+col[i]-arr[i][j]==totl)
			{
				cout << "YES" <<endl;
				cout << i+1 << " "<<j+1;
				return 0;
			}
	cout << "NO" <<endl;
	return 0;
}