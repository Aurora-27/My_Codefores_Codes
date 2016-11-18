#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	int S=0,R=0;
	int i = 0,j = n-1;
	while(n)
	{
		if(arr[i]>arr[j])
		{
			S+=arr[i];
			i++;
		}
		else
		{
			S+=arr[j];
			j--;
		}
		n--;
		if(n==0)
			break;
		if(arr[i]>arr[j])
		{
			R+=arr[i];
			i++;
		}
		else
		{
			R+=arr[j];
			j--;
		}
		n--;
 
	}
	cout << S << " "<< R;
	return 0;
}