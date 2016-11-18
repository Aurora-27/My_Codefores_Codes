#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[100005];
map<int,int>ma;
int main() {
    int n,m;
    cin >> n >> m;
    vector<int>a;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        arr[tmp]++;
        ma[tmp]= i+1;
    }
    for(int i=0;i<m;i++)
    {
        int tmp;
        cin >> tmp;
        if(!arr[tmp])
        {
            cout << "Impossible";
            return 0;
        }
        else if(arr[tmp]>1)
        {
            flag =1;
        }
        else
        {
            a.push_back(ma[tmp]);
        }
    }
    if(flag)
        cout << "Ambiguity";
    else
    {
        cout << "Possible"<<endl;
        for(int u:a)
            cout << u << " ";
    }
	return 0;
}
