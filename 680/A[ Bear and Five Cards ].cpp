#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr1[101];
int main() {
	vector<int>arr;
	int sum_ini=0;
	for(int i=0;i<5;i++)
		{
			int tmp;
			cin >> tmp;
			sum_ini+= tmp;
			arr1[tmp]++;
			arr.push_back(tmp);
		}
	//sort(arr.begin(),arr.end());
	int x2=0,x3=0;
	for(int j=1;j<101;j++)
	{
		if(arr1[j]==2)
			x2=j;
		else if(arr1[j]>=3)
			x3=j;
	}
	if(x3==0&&x2==0)
		cout << sum_ini<<endl;
	else
	{
		int sum = sum_ini-max(2*x2,3*x3);
		cout << sum <<endl;
	}
	
	
	return 0;
}