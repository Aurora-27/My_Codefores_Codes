#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string n,ans;
	cin>>n;
	string a,d,b;
	int i =0,flag = 0;
	for(;i<n.length();i++)
	{
		if(n[i]==&#39;.&#39;)
		{
			flag =1;
			continue;
		}
		if(n[i]==&#39;e&#39;)
		{
			flag = 2;
			continue;
		}
		if(flag==0)
			a.push_back(n[i]);
		else if(flag==1)
			d.push_back(n[i]);
		else
			b.push_back(n[i]);
	}
	//cout << a << " "<<d<<" "<<b;
	//if(b=="0")
	//	cout << a<<&#39;.&#39;<<d;
	//else
	//{
		int tmp = stoi(b);
		int flag1=0;
		ans=a;
		int i1;
		for(i1=0;i1<d.length();i1++)
		{
			if(i1==tmp)
			{
				ans.push_back(&#39;.&#39;);
				flag1=1;
			}
			ans.push_back(d[i1]);
		}
		if(flag1==0)
		{
			int p = tmp - d.length();
			while(p--)
				ans.push_back(&#39;0&#39;);
		}
		
	//}
	int fl = 0,cnt =0;
	string pqr;
	//cout << ans <<endl;
	for (char u: ans)
	{
		//cout << u << " "<<fl<< " ";
		if(u!=&#39;0&#39;&&fl==0)
			fl=1;
		if(u==&#39;.&#39;)
		{
			fl=2;
		}
		if(fl==1||fl==2)
		{
			//cout << "YEA"<<endl;
			pqr.push_back(u);
		}
			
	}
	//cout << pqr <<endl<<fl<<endl;
	int k=pqr.length();
	if(fl==2)
	{
		k--;
		for(; ; k--)
		{
			if(pqr[k]!=&#39;0&#39;||pqr[k]==&#39;.&#39;)
			{
				if(pqr[k]!=&#39;.&#39;)
					k+=1;
				break;
			}
		}
	}
	//cout << k <<endl;
	if(pqr[0]==&#39;.&#39;)
		cout << "0";
	for(int i=0;i<k;i++)
	{
		cout << pqr[i];
	}
	return 0;
}