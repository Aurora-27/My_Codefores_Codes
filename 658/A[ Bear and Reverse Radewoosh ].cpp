#include <iostream>
//#include <string>
using namespace std;

int main() {
	int n,c,lim=0,sid=0,t=0;
	cin >> n >>c;
	int pr[n],tme[n];
	for(int i=0;i<n;i++)
	{
		cin >> pr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> tme[i];
	}
	for(int i=0;i<n;i++)
	{
		t+=tme[i];
		lim+=max(0,pr[i]-c*t);
	}
	t=0;
	for(int i=n-1;i>=0;i--)
	{
		t+=tme[i];
		sid+=max(0,pr[i]-c*t);
	}
	if(lim>sid) cout << "Limak"<<endl;
	else if(sid>lim) cout << "Radewoosh" <<endl;
	else cout << "Tie"<<endl;
}