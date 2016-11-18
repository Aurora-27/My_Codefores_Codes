#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans=n/5;
	if(n%5==0)
	cout << ans << endl;
	else
	cout <<ans+1<<endl;
	return 0;
}