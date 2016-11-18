#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int m,n;
	cin >> n >> m;
	for(int i =0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			char tmp;
			cin >> tmp;
			if(tmp==&#39;C&#39; or tmp==&#39;M&#39; or tmp==&#39;Y&#39;)
			{
				cout <<"#Color";
				return 0;
			}
		}
	cout <<"#Black&White";
	return 0;
}