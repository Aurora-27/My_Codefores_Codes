#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int row[100005];
int col[100005];
int main() {
	int n,m;
	cin >> n >>m;
	long long totl1=n,totl2=n;
	while(m--)
	{
		int tmp1,tmp2;
		long long ans=0;
		cin >> tmp1 >> tmp2;
		row[tmp1]++;
		col[tmp2]++;
		//cout << row [tmp1] << " " << col[tmp2]<<" ";
		if(row[tmp1]==1)
			totl1--;
		if(col[tmp2]==1)
			totl2--;
		//cout << totl1 << " "<<totl2<<" ";
		ans+= totl1*totl2;
		cout << ans << " ";
		//cout <<endl;
	}
	return 0;
}