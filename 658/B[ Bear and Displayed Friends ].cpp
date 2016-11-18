#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,disp,q;
	cin >> n >> disp >>q;
	priority_queue <int, vector <int>, greater<int>> arr;
	vector<int>arr1;
	vector<bool>online(n);
	arr1.push_back(0);
	while(n--)
	{
		int tmp;
		cin >> tmp;
		arr1.push_back(tmp);
	}
	while(q--)
	{
		int a,b;
		cin >> a >>b;
		if(a==1)
		{
			online[b]= 1;
			arr.push(arr1[b]);
			if(arr.size()>disp)
				arr.pop();
		}
		else
		{
			if(!online[b])
				cout << "NO "<<endl;
			else
			{
				if (arr1[b] >= arr.top())
					cout << "YES" << endl;
				else 
					cout << "NO" << endl;
			}
		}
	}
	return 0;
}