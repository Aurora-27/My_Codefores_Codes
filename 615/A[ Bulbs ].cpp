#include <iostream>
using namespace std;
int arr[100006];
int main() {
	int n,m;
	cin >> n >>m;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >>tmp;
		for(int j=0;j<tmp;j++)
		{
			int temp;
			cin >>temp;
			if(arr[temp]==0) arr[temp]++;
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		if(arr[i]==0)
		{
			cout << "NO" <<endl;
			return 0;
		}
	}
	cout << "YES" <<endl;
	return 0;
}