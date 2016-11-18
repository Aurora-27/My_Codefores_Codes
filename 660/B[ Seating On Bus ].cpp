#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin >> n >> m;
	vector<int>arr;
	int j=2*n+1;
	for(int i=1;i<=2*n&&i<=m;i++,j++)
	{
		if(j<=m)
			arr.push_back(j);
		arr.push_back(i);
	}
	for(int u:arr)
		cout << u <<" ";
	cout<<endl;
	return 0;
}