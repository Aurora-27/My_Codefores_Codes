#include <bits/stdc++.h>
using namespace std;
bool isp(string s,int l,int type)
{
   // cout << "hi";
    map<char,int>totl;
    int num = 0;
    for(int i=0;i<l;i++)
    {
       totl[s[i]]++;
       if(totl[s[i]]==1)
            num++;
    }
    if(num==type)
        return true;
    for(int i = l;i<s.length();i++)
    {
        totl[s[i]]++;
        if(totl[s[i]]==1)
            num++;
        totl[s[i-l]]--;
        if(totl[s[i-l]]==0)
            num--;
        if(num==type)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>m;
    int type = 0;
    //cout << "helo";
    for(char u:s)
    {
        if(m.find(u)==m.end())
        {
            m[u]++;
            type++;
        }
    }
    //int minn = (n+type)/2;
    int st = type,e = n,mid;
    //cout << isp(s,5,type) << "......";
    while(st<e)
    {
        mid = (st+e)/2;
        if(isp(s,mid,type))
            e = mid;
        else
        {
            st = mid+1;
        }
    }
    cout << st << endl;
    return 0;
}
