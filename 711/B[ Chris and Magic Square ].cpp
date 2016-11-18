#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long dsum = -1,sum=-1;
	int n;
	cin >> n;
	long long arr[n][n];
	int ff = 0;
	int col,row;
	for(int i=0;i<n;i++)
	{
		int flag = 0;
		long long tsum = 0;
		for(int j=0;j<n;j++)
		{
			int tmp;
			cin >> tmp;
			arr[i][j] = tmp;
			if(tmp == 0)
			{	
				flag = 1;
				col = j;
				row = i;
			}
			tsum+= tmp;
		}
		if(flag)
			sum = tsum;
		else if(!flag and dsum == -1)
			dsum = tsum;
		else
		{
			if(tsum != dsum)
			{
				cout << -1 << endl;
				return 0;
			}
		}
	}
//	cout <<"b1";
	if(dsum == -1)
	{
		cout << 1 << endl;
		return 0;	
	}
	long long miss = dsum - sum;
	if(miss < 1 or dsum == -1)
	{
		cout << -1 << endl;
		return 0;
	}
//	cout <<"b2";
	arr[row][col] = miss;
	for(int i = 0;i<n;i++)
	{	
		long long tsum = 0;
		for(int j =0;j<n;j++)
		{
			tsum +=arr[j][i];
		}
		if(tsum != dsum)
		{
			cout << -1 << endl;
			return 0;
		}
	}
//	cout <<"b3";
	long long tsum = 0;
	for(int i = 0,j=0;i<n;i++,j++)
	{
		
		tsum +=arr[j][i];
		
	}
	if(tsum != dsum)
		{
			cout << -1 << endl;
			return 0;
		}
	//cout <<"b4";
	tsum = 0;
	for(int i = 0,j=n-1;i<n;i++,j--)
	{
		
		tsum +=arr[j][i];
		
	}
	if(tsum != dsum)
		{
			cout << -1 << endl;
			return 0;
		}
		
	//cout <<"b5";
	cout << miss << endl;
	return 0;
}