#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    int arr[26];
    for(int i =0;i<26;i++)
    {
        cin >> arr[i];
    }
    int val = 0;
    int i;
    for( i = 1;i<= s.length();i++)
    {
        val += arr[s[i-1]-&#39;a&#39;]*i;
    }
    sort(arr,arr+26);
    reverse(arr,arr+26);
    while(k--)
    {
        val+= arr[0]*i;i++;
    }
    cout << val;
    return 0;
}
