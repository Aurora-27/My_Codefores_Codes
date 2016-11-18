#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> arr;
	int cur=1,tmp;
	while(n--)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(),arr.end());
	for(int u:arr)
	{
		if(u>=cur)
			cur++;
	}
	cout << cur;
	return 0;
}