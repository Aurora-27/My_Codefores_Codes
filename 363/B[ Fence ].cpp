#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int val = INT_MAX,ans = 0,sum = 0;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
        if(i>=k-1)
        {
            if(i>=k)
                sum-= arr[i-k];
            if(sum < val)
            {
                val = sum;
                ans = i-k+2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
