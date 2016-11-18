#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[30005] = {0};
bool dfs(int d,int n)
{
	if(d==1)
		return true;
	vector<int>res;
	for(int i = 1;i<n;i++)
	{
		if(arr[i]==d)
			res.push_back(i);
	}
	//int flag = 0;
	for(int u:res)
	{
		if(dfs(u,n))
		{
			return true;
		}
	}
	return false;
}
int main() 
{
	int n,d;
	cin >> n >> d;
	if(d==1)
	{
		cout << "YES";
		return 0;
	}
	
	//arr.push_back(0);
	for(int i = 1;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		arr[i] = i + tmp;
	}
	if(dfs(d,n))
		cout << "YES";
	else
		cout << "NO" ;
	return 0;
}