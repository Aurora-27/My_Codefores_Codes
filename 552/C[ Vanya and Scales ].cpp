#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w,m;
    cin >> w >> m;
    vector<int> s(101,0);
    int j = 0;
    while(m)
    {
        s[j]= m%w;
        j++;
        m/= w;
    }
    for(int i = 0;i<101;i++ )
    {
        if( s[i] == 0 or s[i]== 1 )
            continue;
        else if( (s[i] == w or s[i] == w-1) and i!= 100)
            s[i+1]++;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
