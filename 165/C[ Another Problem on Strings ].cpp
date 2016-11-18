#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[s.length()] = {0};
    int t = 0,i = 0;
    for(char u:s)
    {
        if(u==&#39;1&#39;)
            t++;
        arr[i] = t;
        i++;
    }
    int ones = arr[s.length() - 1 ];
    if(ones < n)
    {
        cout << 0 << endl;
        return 0;
    }
    int totl[ones + 1] = {0};
    for(int i :arr)
    {
        totl[i]++;
    }
    long long ans = totl[n];
    if(n==0)
    {
        for(int i =0;i<=ones;i++)
        {
            ans+= 1LL*(totl[i])*(totl[i]-1)/2;
        }
    }
    else
    {
        for(int i =0;i<=ones;i++)
        {
            int tmp = i - n;
            if(tmp < 0)
                continue;
            ans+= 1LL*totl[i]*totl[i-n];
        }
    }

    cout << ans;
    return 0;
}
