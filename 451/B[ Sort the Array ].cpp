#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n],brr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    map<int,int>m;
    sort(arr,arr+n);
    for(int i = 1;i<=n;i++)
        m[arr[i-1]] = i;
    int l = -1,r;
    for(int i = 0;i<n;i++)
    {
        if(m[brr[i]]!= i+1)
        {
            if(l== -1)
                l = i+1;
            else
                r = i+1;
        }
    }
    if(l== -1)
    {
        cout << "yes" << endl << 1 << " " << 1 ;
        return 0;
    }
    reverse(brr+l-1,brr+r);

    for(int i = 0;i < n-1;i++)
    {
        if(brr[i] > brr[i+1])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl << l << " " << r;
    return 0;
}
