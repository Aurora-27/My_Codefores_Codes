#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >>n;
	ll win=0;
	while(n--)
	{
		int tmp;
		cin >> tmp;
		//sum+=tmp;
		if(tmp%2==0)
			win++;
		if(win%2==0 or win==0)
			cout << 2<<endl;
		else cout <<1<<endl;	
			
	}
	return 0;
}