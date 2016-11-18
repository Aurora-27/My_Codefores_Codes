#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string>ans;
	int flag = 0;
	while(n--)
	{
		string s;
		cin >> s;
		if(s[0]==&#39;O&#39; and s[1]==&#39;O&#39; and flag == 0)
		{
			flag = 1;
			s[0] = &#39;+&#39;;
			s[1] = &#39;+&#39;;
		}
		else if(s[3]==&#39;O&#39; and s[4]==&#39;O&#39; and flag == 0)
		{
			flag = 1;
			s[3] = &#39;+&#39;;
			s[4] = &#39;+&#39;;
		}
		ans.push_back(s);
	}
	if(flag)
	{
		cout << "YES" << endl;
		for(auto u:ans)
			cout << u << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}