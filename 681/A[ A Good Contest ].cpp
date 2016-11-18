#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int flag =0;
	while(n--)
	{
		string s;
		cin >>s;
		int bef,aft;
		cin >> bef >>aft;
		if(bef>=2400)
		{
			if(aft>bef)
				flag=1;
		}
		if(flag==1)
			break;
	}
	if(flag==1)
		cout << "YES"<<endl;
	else
		cout <<"NO"<<endl;
	return 0;
}