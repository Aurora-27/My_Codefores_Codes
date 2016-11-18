#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,c,d;
	cin >>n>> a>>b>>c>>d;
	int i,j,k,l;
	long long ans=0;
	for(i=1;i<=n;i++)
	{
		j=i+a-d;
		l=b-c+i;
		k=a+l-d;
		//cout << j<<k<<l <<endl;
		if(j>=1&&j<=n&&k>=1&&k<=n&&l>=1&&l<=n)
			ans++;
	
	}
	cout << ans*n <<endl;
	return 0;
}