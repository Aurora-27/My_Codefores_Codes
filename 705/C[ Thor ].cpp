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
deque< pair< int , int > > rec;
int till[300005];
long long  arr[300005];
int main()
{
	memset( arr , 0 , sizeof(arr) );
    ios_base::sync_with_stdio(false);
    long long  n , q ;
    cin >> n >> q ;
    long long  cur = 0 ;
    long long  tmp = 0;
    while( q-- )
    {
    	long long  ty , x ;
    	cin >> ty >> x ;
    	if( ty == 1 )
    	{
    		arr[x]++;
    		++tmp;
    		rec.push_back( MP(x,tmp) );
    		++cur;
    	}
    	else if( ty == 2 )
    	{
    		cur -= arr[x];
    		arr[x] = 0;
    		till[x] = tmp;
    	}
    	else
    	{
    		while( ! rec.empty() )
    		{
    			//cnt++;
    			auto it = rec.front();
    			if( it.second > x )
    				break;
    			if( arr[it.first] > 0 && it.second > till[it.first] )
    			{
    				arr[it.first]--;
    				cur--;
    			}
    			rec.pop_front();
    		}
    	}
    	cout << cur << endl;
    }
    return 0;
}