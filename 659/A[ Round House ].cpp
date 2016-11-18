#include <iostream>
//#include <string>
using namespace std;

int main() {
	int n,a,b,ans;
	cin >> n >> a >> b;
	ans=a+b;
	ans=ans%n;
	if(ans<=0)
	   ans=n+ans;
	cout << ans << endl;
	return 0;
}