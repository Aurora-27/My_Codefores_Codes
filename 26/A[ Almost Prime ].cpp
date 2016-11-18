#include <iostream>



#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
vector<int>arr;
int main(void) {
	// your code goes here
	int n ; cin >> n;
	for(int i=0;i<=n;i++)
	{
		arr.push_back(1);
	}
	arr[0]=0;
	arr[1]=0;
	for(int i=2;i<=n;i++)
	{
		int flag=0;
		if(arr[i]==1)
			for(int j=2;j*i<=n;j++)
				{
					arr[i*j]=0;
					flag =1;
				}
		if(arr[i]==1&&flag==0)
			break;
	}
	for(int i=0;i<=n;i++)
		if(arr[i]==1)
			primes.push_back(i);
	int ans=0;
	for(int i=4;i<=n;i++)
	{
		int totl=0;
		for(int j=0;j<primes.size()&&j<i;j++)
			{
				if(totl>=3)
					break;
				if(i%primes[j]==0)
					totl++;
				
			}
		if(totl==2)
			{
				ans++;
				//cout << i << " ";
			}
	}
	/*for(int u:primes){
		cout << u << " ";
	}*/
	cout << ans << endl;
	return 0;
}
