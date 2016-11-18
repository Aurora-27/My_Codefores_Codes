#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a>>b>>c;
	if(a==b)
	{
		cout << "YES"<<endl;
	
		return 0;
	}
	if(c==0){
		cout << "NO"<<endl;
	
		return 0;
	}
	long long diff=b-a;
	if((c>0&&b<a)||(c<0&&b>a)){
		cout <<"NO"<<endl;
	return 0;
	}
	if(diff%c==0)
		cout << "YES"<<endl;
	else
		cout <<"NO"<<endl;
	return 0;
}