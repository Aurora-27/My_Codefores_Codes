#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t,s,x;
	cin >> t >>s>>x ;
	int sum=-1;
	for(int i=0;sum<=x;i++)
	{
		sum = t+i*s;
		if(sum==x||(sum+1==x&&i!=0))
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO "<<endl;
	return 0;
}