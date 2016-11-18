#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int w= 0,d=0 ,l=0;
	for(int i=1;i<7;i++ )
	{
		int m = abs(i-a);
		int n =  abs(i-b);
		if(m>n)
			w++;
		else if (m==n)
			d++;
		else
			l++;
	}
	cout << l << " "<<d<<" "<<w;
	return 0;
}