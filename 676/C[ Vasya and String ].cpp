#include <bits/stdc++.h>
using namespace std;
bool check(int m,string s,int k)
{
    int numb = 0,numa = 0;
    for(int i = 0;i<m;i++)
    {
        if(s[i]==&#39;a&#39;)
            numa++;
        else numb++;
    }
    if(numa >= m-k or numb>= m-k)
        return true;
    for(int i = 0;i<s.length()-m;i++)
    {
        if(s[i]==&#39;a&#39;)
            numa--;
        else
            numb--;
        if(s[i+m]==&#39;a&#39;)
            numa++;
        else
            numb++;
        if(numa>= m-k or numb>=m-k)
            return true;
    }
    return false;
}

int main()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 1,j= n ;
    while(i<j)
    {
        int mid = (i+j)/2;
        if(check(mid,s,k))
            i = mid;
        else
            j = mid-1;
        if(i==j-1)
        {
            if(check(j,s,k))
                i = j;
            break;
        }
    }
    //cout << check(5,s,k) << " jcdsk";
    cout << i << endl;
    return 0 ;
}
