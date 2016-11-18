#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string>ans;
	string s;
	cin >> s;
	string t;
	t=s;
	reverse(s.begin(),s.end());
	ans.push_back(t);
	ans.push_back(s);
	for(string u:ans){
		cout <<u;
	}
	cout<<endl;
	return 0;
}