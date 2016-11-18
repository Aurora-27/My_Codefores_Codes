#include <bits/stdc++.h>
using namespace std;
bool func(pair<int,int>a,pair<int,int>b)
{
    return a.second > b.second;
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>>wts;
    int act[n+1];
    for(int i = 0;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        act[i+1] = tmp;
        auto p = make_pair(i+1,tmp);
        wts.push_back(p);
    }
    sort(wts.begin(),wts.end(),func);
    long long ans = 0;
    int arr[n+1][n+1] = {0};
    for(int i = 0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    for(auto u:wts)
    {
        for(int i = 1;i<=n;i++)
        {
            if(arr[u.first][i])
            {
                ans+= act[i];
                arr[i][u.first] = 0;
            }
        }
    }
    cout << ans << endl;
    return 0 ;
}
