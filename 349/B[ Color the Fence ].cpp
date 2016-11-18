#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int flag = 1;
int arr[10];
int main() 
{
	//map<int,int>m;
	//vector<pair<int,int>>arr;
	int p;
	cin >> p;
	string s;
	int mi = 100000000;
	for(int i = 1;i<=9;i++)
	{
		cin >> arr[i];
		mi = min( mi, arr[i]);
	}
	int flag2 = 1;
	while(flag2)
	{
		flag2 = 0;
		int dig = 0,last;
		for(int i = 1;i<=9;i++)
		{
			dig = max( dig, p/ arr[i] );
		}
	    for( int i = 9 ; i >= 0 ; i--)
	    {
	    	int tmp = p;
	    	tmp -= arr[i];
	    	if( (tmp/mi) == dig -1 && tmp >= 0)
	    	{
	    		s.push_back( &#39;0&#39; + i);
	    		p = tmp;
	    		flag2 = 1;
	    		break;
	    	}
	    }
	}
	
	sort( s.rbegin() , s.rend() );
	if(s.length())
		cout << s;
	else
		cout << -1 << endl;
	return 0;
}