#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int wR1=0;
    int wB1=0;
    for(int i =0;i<n;i++)
    {
        if(i%2)
        {
            if(s[i]==&#39;r&#39;)
                wR1++;
        }
        else
        {
            if(s[i]==&#39;b&#39;)
                wB1++;
        }
    }
    int ans1 = max(wR1,wB1);
    int wR2=0;
    int wB2=0;
    for(int i =0;i<n;i++)
    {
        if(i%2)
        {
            if(s[i]==&#39;b&#39;)
                wB2++;
        }
        else
        {
            if(s[i]==&#39;r&#39;)
                wR2++;
        }
    }
    int ans2 = max(wR2,wB2);
    cout << min(ans1,ans2)<<endl;
    return 0;
}
