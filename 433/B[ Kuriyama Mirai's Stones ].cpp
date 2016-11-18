#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin >> n;
	int arr[n];
	long long sum[n],ssum[n];
	long long s =0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		s+= arr[i];
		sum[i] = s;
	}
	sort(arr,arr+n);
	s = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		s+= arr[i];
		ssum[i] = s;
	}
	cin >> q;
	while(q--)
	{
		int t,i,j;
		cin >> t >> i >> j;
		if(t==1)
		{
			if(i!=1)
				cout << sum[j-1] - sum[i-2] << endl;
			else
			{

				cout << sum[j-1] << endl;
			}

		}
		else
		{
			if(i!=1)
				cout << ssum[j-1] - ssum[i-2] << endl;
			else
			{

				cout << ssum[j-1] << endl;
			}


		}
	}
	return 0;
}
