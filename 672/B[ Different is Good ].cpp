#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main() {
	int n;cin >> n;
	int ans=0;
	if(n>26)
		{
			cout << -1 << endl;
			return 0;
		}
	for(int i=0;i<n;i++){
		char tmp;
		cin >>tmp;
		int tmp1=tmp;
		if(arr[tmp-&#39;a&#39;]>=1)
			ans++;
		arr[tmp1-&#39;a&#39;]++;
	}
	cout << ans <<endl;
	return 0;
}