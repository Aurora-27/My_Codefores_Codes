#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int tp1=0,tp2=0;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		tp1=tp1|tmp;
	}
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin >>tmp;
		tp2=tp2|tmp;
	}
	int ans=tp1+tp2;
	cout << ans <<endl;
	return 0;
}