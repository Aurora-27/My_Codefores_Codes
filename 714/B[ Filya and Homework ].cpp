#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	vector<int>arr;
	int min = INT_MAX;
	int max = INT_MIN;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
		if(tmp<min)
			min = tmp;
		if(tmp>max)
			max = tmp;
	}
	if((max-min)%2)
	{
		for(int u:arr)
		{
			if(u!=min and u!=max)
			{
				cout << "NO";
				return 0;
			}
		}
		cout << "YES";
		return 0;
	}
	int diff = (max - min)/2;
	for(int u:arr)
	{
		if(u!= min and u!= min+diff and u!= min+(2*diff))
		{
			cout << "NO";
			return 0;
			
		}
	}
	cout << "YES";
	return 0;
}