#include <bits/stdc++.h>
using namespace std;
int minC = INT_MAX;
vector<vector<pair<int,int>>>graph(100005);
vector<bool>isB(100005,0);

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    if(k==0)
    {
        cout << -1;
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        int n1,n2,l;
        cin >> n1 >> n2 >> l;
        pair<int,int> p1 = make_pair(n2,l);
        pair<int,int> p2 = make_pair(n1,l);
        graph[n1].push_back(p1);
        graph[n2].push_back(p2);
    }
    for(int i= 0;i<k;i++)
    {
        int tmp;
        cin >> tmp;
        isB[tmp]=1;
    }
    int flag = 0;
    for(int i = 1;i<=n;i++)
    {
        if(!isB[i])
        {
            for(auto u:graph[i])
            {
                if(isB[u.first]==1)
                    if(minC>u.second)
                    {
                        minC = u.second;
                        flag = 1;
                    }
            }
        }
    }
    if(flag)
        cout << minC;
    else
        cout << -1;
    //cout << minC << " "<<-1;
    return 0;
}
