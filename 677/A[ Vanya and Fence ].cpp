#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ans=0;
	int n,h;
	cin >> n >>h;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		if(tmp<=h)
			ans++;
		else
			ans+=2;
	}
	cout << ans <<endl;
	return 0;
}