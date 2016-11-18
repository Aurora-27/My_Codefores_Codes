#include <bits/stdc++.h>
using namespace std;

int arr[100];

bool isPo(int l,int n)
{
	int str[l];
	for(int i = 0;i<l;i++)
		str[i] = INT_MAX;
	int j = 0;
	for(int i = n-1;i>=0;i--)
	{
		str[j] = min(arr[i],str[j]-1);
		if(str[j] < 0)
			return false;
		if(j==l-1)
			j = 0;
		else
			j++;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	
	for(int i = 0;i<n; i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int s = 1,e = n, last = -1;
	while(s<=e)
	{
		int mid = (s+e)/2;
		if( last == mid ) break;
		if(isPo(mid,n))
			e = mid;
		else
			s = mid+1;
		last = mid;
	}
	cout << e << endl;
	return 0;
}