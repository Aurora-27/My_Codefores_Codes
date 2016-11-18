#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin >> n >> m >> d;
    vector<int>arr(n*m,0);
    for(int i = 0;i<n*m;i++)
        cin >> arr[i];
    int steps = 0;
    int x = arr[0]%d;
    for(int i = 1;i<n*m;i++)
    {
        if(arr[i]%d != x)
        {
            cout << -1;
            return 0;
        }
    }
    sort(arr.begin(),arr.end());
    int p = (n*m)/2;
    for(int i = 0;i<n*m;i++)
    {
        steps+= abs(arr[i]-arr[p])/d;
    }
    cout << steps << endl;
    return 0;
}
