#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[1005],ans[1001];
int main() {
	int n;
	cin >>n;
	while(n--)
	{
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}
	int happy=0;
	for(int u:arr)
	{
		ans[u]++;
	}
	int sum=0;
	for(int i = 1001;i>0;i--)
	{
		sum+=ans[i];
		ans[i] = sum;
	}
	int j=0;
	for(int i=1;i<1001;i++)
	{
		if(!ans[j]&&ans[i])
		{
			happy+=ans[i];
			j=i;
		}
		else if(ans[i])
		{
			happy+=(ans[i]-1)*(i-j);
			j =i;
		}
		
	}
	cout << happy;
	return 0;
}