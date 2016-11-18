#include<bits/stdc++.h>
#define assn(n,a,b) assert(n<=b and n>=a)
#define pb push_back
#define mp make_pair
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define TR(v,it) for( LET(it,v.begin()) ; it != v.end() ; it++)
#define repi(i,n) for(int i=0; i<(int)n;i++)
#define sd(n) scanf("%d",&n)
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define sortv(a) sort(a.begin(),a.end())
#define all(a) a.begin(),a.end()
using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, &#39;,&#39;);cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

#define MOD 1000000007ll
LL modpow(LL a, LL n) 
{LL ret=1;LL b=a;while(n) {if(n&1) 
    ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}
return (LL)ret;}

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);
int arr[100], arr2[100] , arr3[100] , ways[100];
int main()
{
    int n ; 
    cin >> n ;
    int sum = 0 ;
    for( int i = 0 ; i < n - 1; i++ )
    {
    	cin >> arr[i];
    	arr[i] += sum;
    	sum = arr[i];
    }
    for( int i = 0 ; i < n - 1 ; i++ )
    {
    	cin >> arr2[i];
    }
    sum = 0;
    for( int i = n - 2 ; i >= 0 ; i-- )
    {
    	arr2[i] += sum;
    	sum = arr2[i];
    }
    for( int i = 0 ;  i < n ; i++ )
    {
    	cin >> arr3[i];
    }
    int id = 0;
    for( int i = 0 ; i < n ; i++)
    {
    	if( i == n-1 )
    	{
    		ways[id++] = arr3[0]+arr2[0];
    	}
    	else if( i == n-2)
    	{
    		ways[id++] = arr[i] + arr3[i+1];
    	}
    	else
    	{
    		ways[id++] = arr[i] + arr3[i+1] + arr2[i+1];  
    	}
    }
    sort( ways, ways + id);
    cout << ways[0] + ways[1];
    return 0;
}