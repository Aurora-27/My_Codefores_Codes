#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string a,b,c,d,p;
	/*ll A = stoi(a);
	ll B = stoi(b);
	for(char u:a)
		if(u !=&#39;0&#39;)
			c.push_back(u);
	for(char u:b)
		if(u !=&#39;0&#39;)
			d.push_back(u);
	ll C = stoi(c);
	ll D = stoi(d);
	if()*/
	cin >> a>>b;
   	ll ans = stoi(a)+stoi(b);
   	string ANS = to_string(ans);
   	for(char u:a)
		if(u !=&#39;0&#39;)
			c.push_back(u);
	//printf("1");
	for(char u:b)
		if(u !=&#39;0&#39;)
			d.push_back(u);
	//printf("2");
	for(char u:ANS)
		if(u !=&#39;0&#39;)
			p.push_back(u);
   	if(stoi(c)+stoi(d)==stoi(p))
   		cout <<"YES";
   	else
   		cout <<"NO";
	return 0;
}