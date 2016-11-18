#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int k= n%7;
	int l= n/7;
	int min=l*2;
	if(k==6)
		min++;
	int max=min;
	
	if(k>=2&&k<=5)
		max+=2;
	if(k==1||k==6){
		max+=1;
		//cout << "hi";
		}
	cout << min << " "<<max <<endl;
	return 0;
}