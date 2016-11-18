#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n+1],ans[n+1];
    for(int i = 1;i<=n;i++)
    {
        cin >> arr[i];
    }
    set<int>uni;
    for(int i = n;i>=1;i--)
    {
        uni.insert(arr[i]);
        ans[i] = uni.size();
    }
    while(m--)
    {
        int p;
        cin >> p;
        cout << ans[p] << endl;
    }
    return 0;
}
