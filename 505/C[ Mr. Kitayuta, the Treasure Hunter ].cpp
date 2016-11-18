#include <bits/stdc++.h>
using namespace std;

int diamond[30001] ;
int n , d;
int dp[30001][250*2];
bool used[30001][250*2] = {};
//map< pair< int ,int >, int > dp;
int func( int i, int j)
{
   // cout << i << " " << j << endl ;
    int jj = j-(d-250);
    //if (i >= M) return 0;

    if( i >= 30001 )
        return 0;
    if (used[i][jj]) return dp[i][jj];
    used[i][jj] = true;

    int to_return;
    if( j == 1 )
    {
        to_return = diamond[i] + max( func(i+j, j) , func(i+j+1, j+1) );
    }
    else
    {
        to_return = diamond[i] + max( max( func(i+j, j) , func(i+j+1, j+1) ) , func( i + j - 1 , j-1) );
    }
    dp[ i ][jj] = to_return;
    return to_return;
}
int main()
{
    cin >> n >> d;

    for(int i = 0;i <n;i++)
    {
        int tmp;
        cin >> tmp;
        diamond[tmp]++;
    }
    //puts("rishabh");
    cout << func(d,d);

    return 0;
}
