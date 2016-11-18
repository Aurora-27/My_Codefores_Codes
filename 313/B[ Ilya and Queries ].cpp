#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin >> s;
	vector<int>arr;
	arr.push_back(0);
	for(int i = 0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
			arr.push_back(1);
		else
			arr.push_back(0);
	}
	int c = 0;
	for(int &u:arr)
	{
		if(u)
			c++;
		u = c;
	}
	
	int m;
	cin >> m;
	while(m--)
	{
		int l,r;
		cin >> l  >> r;
		l--;
		r--;
		cout << arr[r] - arr[l] << endl;
	}
	return 0;
}