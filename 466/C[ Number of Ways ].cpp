#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double sum = 0;
	long long r = 0,x = 0,ans = 0;
	cin >> n;
	if(n<3)
	{
		cout << 0 << endl;
		return 0;
	}
	vector<int>arr,num(n,0);
	vector<long long>totl;

	for(int i = 0;i<n;i++)
	{
		int tmp;
		cin >> tmp;
		sum+= tmp;
		arr.push_back(tmp);
		totl.push_back(sum);
	}
    double p = sum/3;
    //cout << p << "=p sum=" <<sum;
    long long nancy = floor(p);
    if(nancy!=p)
    {
        cout << ans ;
        return 0;
    }
	sum/=3;
	//vector<long long>rsum;
	for(int i = n-1;i>=0;i-- )
	{
		r+= arr[i];
		//rsum.push_back(r);
		if(r==sum)
		{
			x++;

		}
		num[i]= x;
	}

	for(int i = 0;i<n-2;i++)
	{
		if(totl[i]==sum)
		{
		    ans += num[i+2];

		}
	}
	cout << ans;
	return 0;
}
