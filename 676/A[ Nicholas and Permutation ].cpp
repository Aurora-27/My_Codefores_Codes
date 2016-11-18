#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int pos1,posn;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		if(tmp==1)
			pos1=i;
		else if(tmp==n)
			posn=i;
	}
	
	int a=abs(pos1-0);
	int b=abs(posn-0);
	int c=abs(posn-n+1);
	int d=abs(pos1-n+1);
	int ans1=max(a,b);
	int ans2=max(c,d);
	int ans=max(ans1,ans2);
	cout << ans <<endl;
	return 0;
}