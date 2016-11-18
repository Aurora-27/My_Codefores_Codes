#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n>>k;
	int sum=0;
	vector<int>arr,rob;
	for(int i=0;i<n;i++){
		int tmp;
		cin >> tmp;
		rob.push_back(tmp);
	}
	for(int i=0;sum<=k;i++)
	{
		sum+=i;
		arr.push_back(sum);
	}
	arr.pop_back();
	if(k-arr[arr.size()-1]==0)
		arr.pop_back();
	cout << rob[k-arr[arr.size()-1]-1]<<endl;
	return 0;
}