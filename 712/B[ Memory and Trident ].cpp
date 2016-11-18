#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int left = 0,up = 0;
    if(s.length()%2)
    {
        cout << -1;
        return 0;
    }
    for(char u:s)
    {
        if(u==&#39;R&#39;)
            left--;
        else if(u==&#39;L&#39;)
            left++;
        else if(u==&#39;U&#39;)
            up++;
        else
            up--;
    }
    if(abs(left)%2)
        cout << abs(up)/2 + abs(left)/2 + 1;
    else
        cout << abs(up)/2 + abs(left)/2;
    return 0;
}
