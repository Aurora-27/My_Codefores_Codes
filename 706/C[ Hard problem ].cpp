#include <bits/stdc++.h>
using namespace std;
long long int dp[100005][2];
int main()
{
    int n;
    cin >> n;
    vector<int>cost;
   // vector<vector<long long>>totl(n,vector<long long>(2,0));
   memset(dp , 0 , sizeof(dp) );
    for(int i = 0 ;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        cost.push_back(tmp);
    }
    vector<vector<string>>s;
    for(int i =0;i<n;i++)
    {
        vector<string>tmp1;
        string tmp;
        cin >> tmp;
        tmp1.push_back(tmp);
        reverse(tmp.begin(),tmp.end());
        tmp1.push_back(tmp);
        s.push_back(tmp1);
    }
    dp[0][1] = cost[0];
    for (int i = 1;i<n;i++)
    {
        dp[i][0] = dp[i][1] = 1000000000000000;
        if(s[i-1][0] <= s[i][0])
            dp[i][0] = min(dp[i][0],dp[i-1][0]);
        if(s[i-1][1] <= s[i][0])
            dp[i][0] = min(dp[i][0],dp[i-1][1]);
        if(s[i-1][0] <= s[i][1])
            dp[i][1] = min(dp[i][1],dp[i-1][0] + cost[i]);
        if(s[i-1][1] <= s[i][1])
            dp[i][1] = min(dp[i][1],dp[i-1][1]+ cost[i]);
    }
    long long ans = min(dp[n-1][0],dp[n-1][1]);
    if(ans>=1000000000000000)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0 ;
}
