#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0;i <r;i++)
        for(int j = 0;j<c;j++)
        {
            char tmp;
            cin >> tmp;
            if(tmp == &#39;.&#39;)
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    int dprow[r][c], dpcol[r][c]={0};
    for(int i = 0;i <r;i++)
        for(int j = 0;j<c;j++)
        {
            if(j==0)
                dprow[i][j] = 0;
            else
            {
                if(arr[i][j] or arr[i][j-1])
                {
                    dprow[i][j] = dprow[i][j-1];
                }
                else
                    dprow[i][j] =  dprow[i][j-1] + 1;
            }
        }
    for(int i = 0;i <c;i++)
        for(int j = 0;j<r;j++)
        {
            if(j==0)
            	dpcol[j][i] = 0;
            else
            {
            	if(arr[j][i] or arr[j-1][i])
            		dpcol[j][i] = dpcol[j-1][i];
            	else
            		dpcol[j][i] = dpcol[j-1][i] + 1;
            }
        }

    int t;
    cin >> t;
    while(t--)
    {
        int r1, c1, r2, c2;
        cin >> r1 >>  c1 >> r2 >> c2;
        long long ans = 0;
       // cout << ans << endl;
        for( int i = r1-1 ; i < r2 ; i++ )
        {
            ans+= dprow[i][c2-1] - dprow[i][c1 - 1];
        }
       // cout << ans << endl;
        for( int i = c1-1 ; i < c2 ; i++ )
        {
            ans+= dpcol[r2 - 1][i] - dpcol[r1 - 1][i];
        }
        cout << ans << endl;
        //cout << "hehe" << endl;
    }

    return 0;
}
