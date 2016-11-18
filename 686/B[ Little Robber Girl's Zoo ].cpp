#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	vector<long long>arr;
	cin >> n;
	while(n--)
	{
		long long tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	int flag=1;
	while(flag)
	{
		flag=0;
		for(int i=0;i<arr.size()-1;i++)
	{
		
		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
			cout << i+1 << " "<<i+2<<endl;
			flag=1;
		}
	}
	
	}
	return 0;
}