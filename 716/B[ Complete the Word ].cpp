#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin >> s;
	string rem;
	int i = 0,ind =0;
	if(s.length()<26)
	{
		cout << -1;
		return 0;
	}
	for(;i<s.length()-25;i++)
	{
		vector<int>arr(26,0);
		int flag = 1;
		for(int j = i;j<i+26;j++)
		{
			if(s[j]!=&#39;?&#39;)
			{
				arr[s[j]-&#39;A&#39;]++;
			}
			if(s[j]!=&#39;?&#39; and arr[s[j]-&#39;A&#39;]>1)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			//cout << "here";
			for(int p = 0;p<26;p++)
			{
				if(arr[p]==0)
					rem.push_back(p+&#39;A&#39;);
			}
			ind = 1;
			break;
		}
	}
	if(ind)
	{
		int t = 0;
		for(int j = 0;j<s.length();j++)
		{
			if(j<i or j>i+25 )
			{
				if(s[j]==&#39;?&#39;)
					cout << &#39;A&#39;;
				else cout << s[j];
			}
			else
			{
				if(s[j]==&#39;?&#39;)
				{
					cout << rem[t];
					t++;	
				}
				else
					cout << s[j];
			}
		}
	}
	
	else cout << -1;
	//cout <<"......." << s << "......" << rem;
	return 0;
}