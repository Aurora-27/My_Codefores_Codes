#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;
    int graph[n+1][n+1] = {0};
    int sz[n+1] = {0};
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        graph[a][b] = 1;
        sz[a]++;
        sz[b]++;
        graph[b][a] = 1;
    }
    int c = 0,flag = 1;
    while(flag)
    {
        int tmp = 1;
        vector<int>sizes;
        for(int i = 1;i<=n;i++)
        {
            if(sz[i]==1)
            {
                tmp = 0;
                sizes.push_back(i);
            }
        }
        for(int i:sizes)
        {
            sz[i]--;
            for(int j = 1;j<=n;j++)
            {
                if(graph[i][j])
                {
                    graph[i][j] = 0;
                    graph[j][i] = 0;
                    sz[j]--;
                }
            }
        }
        if(tmp)
        {
            flag = 0;
            c--;
        }
        c++;
    }
    cout << c << endl;
    return 0;
}
