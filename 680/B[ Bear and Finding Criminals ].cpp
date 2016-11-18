#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin >> n >>a;
	a--;
	vector<int> arr;
	int chor=0;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	int i=0;
	//int k=max(n-a,a-1);
	//int l=min(n-a,a-1);
	while(a-i>=0||a+i<=n-1)
	{
		if(a-i>=0&&a+i<=n-1){
			if(arr[a+i]==1&&arr[a-i]==1)
				{
					if(i==0)
						chor++;
					else
						chor+=2;
				}
		}
		else if(a-i>=0)
			{
				if(arr[a-i]==1)
				chor++;
			}
		else{
			//cout << "hello"<<a<<" "<< i<<endl;
		
			if(arr[a+i]==1)
				chor++;
			}
		i++;
	}
	cout << chor << endl;
	return 0;
}