#include <bits/stdc++.h>
using namespace std;
string arr[21][21],arr1[21][21];
int vis1[21][21] ,vis2[21][21] ;
pair< int , int > last;
stack< pair< int , int > > gg;
bool checkf(int n,int m)
{
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            if(vis1[i][j]==0)
                return false;
    return true;
}
bool checks(int n,int m)
{
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            if(vis2[i][j]==0)
                return false;
    return true;
}
void dfs(int a,int b,int n,int m)
{
    if( a < 0 || b >= m || b <0 || a >= n)
      return ;
    if(vis1[a][b])
        return;
    vis1[a][b] = 1;
    for(char u:arr[a][b])
    {
        if(u==&#39;>&#39;)
            dfs(a,b+1,n,m);
        if(u==&#39;<&#39;)
            dfs(a,b-1,n,m);
        if(u==&#39;^&#39;)
            dfs(a-1,b,n,m);
        if(u==&#39;v&#39;)
            dfs(a+1,b,n,m);
    }
    last = make_pair(a,b);
    gg.push(last);
}
void rdfs(int a,int b,int n,int m)
{
  if( a < 0 || b >= m || b <0 || a >= n)
      return ;
    if(vis2[a][b])
        return;
    vis2[a][b] = 1;
    for(char u:arr[a][b])
    {
        if(u==&#39;>&#39;)
                rdfs(a,b-1,n,m);
        if(u==&#39;<&#39;)
                rdfs(a,b+1,n,m);
        if(u==&#39;^&#39;)
                rdfs(a+1,b,n,m);
        if(u==&#39;v&#39;)
            if(a!=0)
                rdfs(a-1,b,n,m);
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    char row[n],col[m];
    for(int i = 0;i<n;i++)
        cin >> row[i];
    for(int j = 0;j<m;j++)
        cin >> col[j];
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
        {
            if(row[i]==&#39;>&#39;)
               //if(j != (m-1) )
                    arr[i][j].push_back(&#39;>&#39;);
            else
                //if( j != 0 )
                    arr[i][j].push_back(&#39;<&#39;);

            if(col[j]==&#39;v&#39;)
                 //if(i!=n-1)
                    arr[i][j].push_back(&#39;v&#39;);
            else
                //if(i!= 0 )
                    arr[i][j].push_back(&#39;^&#39;);

        }
    dfs(0,0,n,m);
    int flag = checkf(n,m);
    if(!flag)
    {
        cout << "NO";
        return 0;
    }
    rdfs(last.first,last.second,n,m);
    int flag2 = checks(n,m);
    if(!flag2)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
