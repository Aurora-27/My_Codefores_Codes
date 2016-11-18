#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int mx=0;
	cin >> n;
	vector<int>arr;
	while(n--)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
		if(mx<tmp)
			mx = tmp;
	}
	int flag=0,sum=0;
	for(int u:arr)
	{
		if(u==mx&&!flag)
		{
			flag=1;
			continue;
		}
		sum+=u;
	}
	int ans = mx +1 - sum;
	cout << ans;
	return 0;
}