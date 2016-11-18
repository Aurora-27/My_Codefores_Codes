#include <iostream>
#include <bits/stdc++.h>
//#define for(int i=0;i<n;i++) fori(i,n);
using namespace std;
int m[367];
int f[367];
int main() {
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		char c;
		int a,b;
		cin >> c >>a >>b;
		if(c== &#39;M&#39;)
		{
			for(int i=a;i<=b;i++)
				m[i]++;
		}
		if(c== &#39;F&#39;)
		{
			for(int i=a;i<=b;i++)
				f[i]++;
		}
	}
	int ans=0;
	for(int j=1;j<=366;j++)
	{
		if(2*min(m[j],f[j])>=ans)
			ans=2*min(m[j],f[j]);
	}
	cout << ans <<endl;
	return 0;
}