#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >>n;
	vector<int>arr;
	if(n==1)
	{
		int tmp;
		cin >> tmp;
		cout << tmp;
		return 0;
	}
	long long ways=1,flag=0;
	while(n--)
	{
		int tmp;
		cin>>tmp;
		//if(tmp = 1)
		//	flag=1;
		arr.push_back(tmp);
		//if(!tmp&&flag)
		//	zero++;
		
	}
	int i=0,j=0,num=0;
	while(i<arr.size())
	{
		if(!arr[i])
			i++;
		else 
		{
			if(j<=i)
			{
				j = i+1;
				if(j==arr.size())
					break;
			}
			else
			{
				if(!arr[j])
				{
					j++;
					num++;
					if(j==arr.size())
						break;
				}
				else
				{
					i = j;
					if(num)
					{
						num++;
						ways*=num;
						num=0;
					}
				}
			}
		}
	}
	if(j==0)
		cout << 0;
	else
		cout << ways ;
	return 0;
}