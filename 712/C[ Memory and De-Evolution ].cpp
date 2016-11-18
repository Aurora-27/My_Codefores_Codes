#include <bits/stdc++.h>
using namespace std;
int minn(int a,int b,int c)
{
	return min(min(a,b),c);
}
int main()
{
	int s,f;
	cin >> s >> f;
	int a,b,c;
	a = f;
	b = f;
	c = f;
	int steps = 0;
	while(1)
    {
        if(a == minn(a,b,c))
            a = min(s,b+c-1);
        else if(b == minn(a,b,c))
            b = min(s,a+c-1);
        else
            c = min(s,a+b-1);
        steps++;
        if(a==b and b == c)
            break;

    }
    cout << steps;
    return 0;
}
