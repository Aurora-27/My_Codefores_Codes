#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct player
{
	string name;
	int score;
};
bool func(player a, player b)
{
	return a.score> b.score;
}
int main()
{
	int pl,re;
	cin >>pl>>re;
	vector<player> arr[10002];
	while(pl--)
	{
		string s;
		int r;
		int tmp;
		cin >> s >> r >> tmp;
		player x;
		x.name = s;
		x.score = tmp;
		arr[r].push_back(x);
	}
	for(int i=1;i<=re;i++)
	{	
		sort(arr[i].begin(),arr[i].end(),func);
		if(arr[i].size()>2)
			if(arr[i][1].score==arr[i][2].score)
			{
				cout<< "?" << endl;
				continue;
			}
		cout << arr[i][0].name << " " <<arr[i][1].name<<endl;
	}
	return 0;
}