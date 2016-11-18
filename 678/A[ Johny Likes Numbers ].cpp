#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >>n>>k;
	int x=n%k;
	int ans=n+k-x;
	cout << ans <<endl;
	return 0;
}