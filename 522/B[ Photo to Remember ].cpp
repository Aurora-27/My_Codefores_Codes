#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>height(n+1),base(n+1);
    int wid = 0,h1 = 0,h2 =0,p;
    for(int i = 1;i<=n;i++ )
    {
        cin >> base[i] >> height[i];
        wid+= base[i];
        if(height[i] > h1)
        {
            h2 = h1;
            h1 = height[i];
            p = i;
        }
        else if( height[i] > h2)
        {
            h2 = height[i];
        }
    }
    for(int i = 1 ;i<=n;i++)
    {
        if(i==p)
            cout << 1LL*(wid-base[i])*h2 << " ";
        else
            cout << 1LL*(wid-base[i])*h1 << " " ;
    }
    return 0;
}
