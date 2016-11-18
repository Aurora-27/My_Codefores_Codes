#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int main() {
	int n,m;
	cin >> n >> m;
	if(m<n)
		{
			cout << "YES" <<endl;
			return 0;
		}
	else
	{
		for(int i=1;i<=n;i++)
		{
			int tmp;
			cin >>tmp;
			for(int j=0;j<m;j++)
			{
				int x=j-tmp;
				x=x%m;
				while(x<0)
					x+=m;
				if(arr[i-1][j]||tmp%m==j||arr[i-1][x])
					arr[i][j]=1;
			}
			
		}
		if(arr[n][0]==1)
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
	return 0;
}