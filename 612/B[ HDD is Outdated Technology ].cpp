#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[200005];
int main() {
	int n; cin >>n;
	int i=0;
	for(int j=0;j<n;j++)
	{
		int tmp;
		cin >> tmp;
		arr[tmp]=i;
		i++;
	}
	long long ans=0;
	for(int k=2;k<=n;k++)
		ans+=abs(arr[k]-arr[k-1]);
	cout << ans <<endl;
	return 0;
}