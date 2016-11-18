#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double arr[11][11];
int main() {
	int n,t;
	cin >> n>>t;
	if(t==0)
	{
		cout << 0 <<endl;
		return 0;
	}
	arr[1][1]=t;
	int ans=0;
	if(t>=1)
		ans++;
	for(int i=2;i<=n;i++)
		for(int j=1;j<=i;j++)
		{
			if(j==1)
				arr[i][j]=max((arr[i-1][1]-1)/2,0.0);
			else if(j==i)
				arr[i][j]=max((arr[i-1][i-1]-1)/2,0.0);
			else
				{
					arr[i][j]=max((arr[i-1][j-1]-1)/2,0.0);
					arr[i][j]+=max((arr[i-1][j]-1)/2,0.0);
				}
			if(arr[i][j]>=1)
				ans++;
		}
	cout <<ans<<endl;
	return 0;
}