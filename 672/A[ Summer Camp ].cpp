#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,totl=0; cin >> n;
	vector<int>arr;
	arr.push_back(0);
	for(int i=1;arr.size()<=n+1;i++)
	{
		if(i<=9)
		{
			arr.push_back(i);
		}
		else if(i<=99)
		{
			arr.push_back(i/10);
			arr.push_back(i%10);
		}
		else
		{
			arr.push_back(i/100);
			int tmp=i/10;
			arr.push_back(tmp%10);
			arr.push_back(i%10);
		}
	}
	cout << arr[n]<<endl;
	return 0;
}