#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int opp,day;
	cin >> opp >>day;
	int ans=0,sum=0;
	for(int i=0;i<day;i++)
	{
		string s;
		cin >> s;
		int flag=1;
		for(char u:s)
		{
			if(u==&#39;0&#39;)
				{
					flag=0;
					sum++;
					break;
				}
		}
		if(flag==1)
			sum=0;
		if(ans<=sum)
			ans=sum;
	}
	cout << ans;
	return 0;
}