#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int arr[n];
    int s = 0;
    for(int i = 0;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        s+= tmp;
        arr[i] = s;
    }
    //int m;
   // cout << endl;
    cin >> m;
    while(m--)
    {
        int f;
        cin >> f;
        int i = 0,e = n-1,mid,pre = -1;
        while(i<=e)
        {

            mid = (i + e)/2;
            if(pre == mid)
                break;
            if(f > arr[mid])
            {
                i = mid+1;
            }
            else
                e = mid;
            pre = mid;
            //cout << &#39;i&#39; << i << " j="<< e << endl;
        }

            cout << i + 1 << endl;
        //cout << "*-------*--------*" << endl;
    }
    return 0;
}
