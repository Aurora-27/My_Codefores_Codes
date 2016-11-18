#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	map<string,int>m;
	int t;
	cin >> t;
	while(t--)
	{
		char ref;
		string tmp;
		cin >> ref >> tmp;
		string pat;
		for(int i= tmp.length()-1;i>=0;i--)
		{
			if((tmp[i]-&#39;0&#39;)%2)
				pat.push_back(&#39;1&#39;);
			else
				pat.push_back(&#39;0&#39;);
		}
		if(ref ==&#39;?&#39;)
		{
			reverse(tmp.begin(),tmp.end());
			pat = tmp;
		}
		for(int i=0;i<18-tmp.length();i++)
			pat.push_back(&#39;0&#39;);
		if(ref==&#39;+&#39;)
			m[pat]++;
		else if(ref==&#39;-&#39;)
			m[pat]--;
		else
			cout << m[pat]<<endl;
	}
	return 0;
}