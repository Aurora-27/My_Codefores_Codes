#include <iostream>
using namespace std;
int minutes;
void func(int a,int b)
{
	if(a<1||b<1) return;
	if(a==1&&b==1) return;
	if (a<b)
	{
		a++;
		b-=2;
	}
	else
	{
		b++;
		a-=2;
	}
	minutes++;
	func(a,b);
}
int main() {
	int a,b;
	cin >>a>>b;
	func(a,b);
	cout << minutes<<endl;
	return 0;
}