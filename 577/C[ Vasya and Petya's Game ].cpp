#include<bits/stdc++.h>
using namespace std;
int arr[1005];
vector< int > prime;
void sieve()
{
  for( int i = 2 ; i < 1005 ; i++  )
  {
    if( arr[i] == 0  )
    {
      for( int j = 2*i ; j < 1005 ; j += i  )
      {
        arr[j]++;
      }
      prime.push_back(i);
    }
  }
}
bool isc( int x  )
{

}
int main()
{
  sieve();
  int n ;
  cin >> n;
  vector< int > ans;
  for( int u : prime  )
  {
    if( u > n  )
      break;
    int tmp = u;
    while( tmp <= n  )
    {
      ans.push_back(tmp);
      tmp *= u;
    }
  }
  sort(ans.begin() , ans.end() );
  cout << ans.size() << endl;
  for( int u : ans  )
    cout << u << " " ;
  return 0 ;
}
