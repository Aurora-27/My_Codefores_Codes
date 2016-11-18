#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>arr;
int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int ans=0;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]==s2[0])
			arr.push_back(i);
	}
	for(int u:arr )
	{
		//cout << u << " ";
		int tmp=u,j=0,k=0;
		while(tmp<s1.length()&&j<s2.length())
			{
				if(s1[tmp++]!=s2[j++])
					{
						k=1;
						break;
					}
			}
		if(k==0&&j==s2.length())
			{
				ans++;
				s1[tmp-1]=&#39;#&#39;;
			}
		
	}
	cout << ans << endl;
	return 0;
}
