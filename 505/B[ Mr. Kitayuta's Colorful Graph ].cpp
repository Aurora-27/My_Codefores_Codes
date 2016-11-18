#include <bits/stdc++.h>
using namespace std;

class UnionFind
{
    //int n;
    public:
        vector<int>nodes;
        void init(int x)
        {
            //n = x;
            nodes.resize(x+1);
            for(int i = 0;i<x+1;i++)
            {
                nodes[i] = i;
            }
        }
        int find(int x)
        {
            if(nodes[x]==x)
                return x;
            return nodes[x] = find(nodes[x]);
        }
        void merge(int x,int y)
        {
            nodes[find(x)] = find(nodes[y]);
        }
        bool isConnected(int x ,int y)
        {
            return find(nodes[x]) == find(nodes[y]);
        }
};

int main()
{
    int n,m;
    UnionFind arr[101];
    cin >> n >> m;
    for( int i = 0 ; i < 101 ; i++)
        arr[i].init(n);
    while(m--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        arr[c].merge(a,b);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int ans = 0,a,b;
        cin >> a >> b;
        for(int i = 1;i<101;i++)
        {
            if(arr[i].isConnected(a,b))
                ans++;
        }
        cout << ans<< endl;
    }
    return 0;
}
