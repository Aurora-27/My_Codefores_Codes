#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
			cout << "I love";
		else
			cout << "I hate";
		if(i==n)
			cout << " it";
		else cout << " that ";
	}
	return 0;
}