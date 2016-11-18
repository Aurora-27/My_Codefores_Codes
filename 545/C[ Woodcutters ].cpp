#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 1 <<endl;
        return 0;
    }
    vector<long long>pos,h;
    for(int i =0;i<n;i++)
    {
        long long p,tmp;
        cin >> p >> tmp;
        pos.push_back(p);
        h.push_back(tmp);
    }
    int ans = 2;
    int cov = pos[0];
    for(int i = 1;i<n-1;i++)
    {
        if(pos[i] - cov > h[i])
        {
            ans++;
           // cout << "1 " << i << " ";
            cov = pos[i];
        }
        else if(pos[i+1]-pos[i] > h[i] )
        {
            ans++;
          //  cout << "2 " << i << " ";
            cov = pos[i] + h[i];
        }
        else
            cov = pos[i];
    }
    cout << ans << endl;
    return 0;
}
