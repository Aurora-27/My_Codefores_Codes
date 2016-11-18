#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> R;
	vector<int> L,pos;
	for(int i=0;i<n;i++)
	{
		char tmp;
		cin >>tmp;
		if(tmp==&#39;R&#39;)
			R.push_back(i);
		else
			L.push_back(i);
	}
	while(n--)
	{
		int tmp;
		cin>>tmp;
		pos.push_back(tmp);
	}
	int i=0,j=0,min=INT_MAX;
	while(i<R.size()&&j<L.size())
	{
		if(pos[R[i]]>pos[L[j]])
		{
			j++;
			continue;
		}
		else
		{
			if(min > (pos[L[j]]-pos[R[i]]))
				min = pos[L[j]] -pos[ R[i]];
			//cout << min << endl;
			if(L[j]>R[i+1])
				i++;
			else
			{
				i++;j++;
			}
		}
	}
	if(min==INT_MAX)
		cout << -1;
	else
		cout << min/2;
	return 0;
}