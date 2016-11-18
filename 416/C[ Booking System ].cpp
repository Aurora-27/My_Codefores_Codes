#include <bits/stdc++.h>
using namespace std;

bool func( vector< int > a , vector< int > b)
{
    return a[2] > b[2];
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>>data;
    for(int i = 1 ; i<=n ; i++)
    {
        int a,b;
        cin >> a >> b;
        vector<int>tmp;
        tmp.push_back(i);
        tmp.push_back(a);
        tmp.push_back(b);
        data.push_back(tmp);
    }
    int k;
    cin >> k;
    vector< pair< int , int > > table(k);
    bool istable[k] = {0};
    for(int i = 0;i<k;i++)
    {
        cin >> table[i].first;
        table[i].second = i+1;
    }
    sort(data.begin(),data.end(),func);
    sort(table.begin(),table.end());
    int req = 0,cost = 0;
    vector< pair< int ,int>>ans;
    for( auto it : data )
    {
        bool isfound = false;
        for( int i = 0 ; i < k ; i++)
        {
            if( table[i].first >= it[1] && !istable[i])
            {
                istable[i] = 1;
                cost += it[2];
                auto p = make_pair(it[0],table[i].second);
                req++;
                ans.push_back(p);
                break;
            }
        }
    }
    cout << req << " " << cost << endl;
    for(auto u:ans)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}
