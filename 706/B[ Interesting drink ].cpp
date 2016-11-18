#include <iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int arr[100003];
int main()
{
	int n;
	cin >> n;
	//vector<int>arr;
	int high =-1;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		arr[tmp]++;
		if(tmp>high)
			high = tmp;
	}
	for(int i=1;i<100002;i++)
		arr[i]+=arr[i-1];
	int d;
	cin>>d;
	while(d--)
	{
		int p;
		cin>>p;
		if(p>high)
			cout << n << endl;
		else
			cout << arr[p]<<endl;
	}
	return 0;
}
