#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int n;
	cin >> n;
	if(n==2)
	{
		cout << 1 <<" "<<2;
		return 0;
	}
	int sum=0;
	vector<int>arr,vis;
	while(n--)
	{
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
		vis.push_back(0);
		sum+=tmp;
	}
	int totl = (sum  *2)/ arr.size();
	//cout << totl<<" "<<sum;
	for(int i=0;i<arr.size();i++)
	{
		if(vis[i])
			continue;
		for(int j=i+1;j<arr.size();j++)
		{
			if(vis[j])
				continue;
			if(arr[i]+arr[j]==totl)
				{
					cout << i+1 << " "<<j+1<<endl;
					vis[i]=1;
					vis[j]=1;
					break;
 				}
		}		
 			
	}
	return 0;
}