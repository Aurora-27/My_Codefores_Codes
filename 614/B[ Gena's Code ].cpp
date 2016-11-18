#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >>n;
	long long zero=0;
    string befnum ="1";
	while(n--)
	{
		string a;
		cin >> a;
		//cout << a <<endl;
		if(a=="0")
		{
			cout << 0 <<endl;
			return 0;
		}
		if(a[a.length()-1]!=&#39;0&#39;&&a!="1")
		{
			befnum = a;
			
		}
		if(a[a.length()-1]==&#39;0&#39;)
		{
			int k=a.length()-1;
			int tmp=0;
			while(a[k--]==&#39;0&#39;)
			{
				tmp++;
				//cout << k << endl;
			}
			
			if(k==-1&&a[0]==&#39;1&#39;){
				zero+=tmp;
				
			}
			else{
				befnum=a;
				
			}
				
		}
	
	}
	cout << befnum ;
	while(zero--){
		cout << 0 ;
	} 
	cout << endl;
	return 0;
}