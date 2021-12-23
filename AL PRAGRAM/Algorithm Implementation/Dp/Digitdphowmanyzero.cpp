#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <deque>
#include <list>
using namespace std;

#define ll long long
#define ull unsigned long lomg
#define db double
#define pi acos(-1)
#define pb push_back
#define mod 1000000007
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
#define gcd(a,b) __gcd(a,b)
#define logab(a,b) (log(a) / lob(b))
#define mem(a,v) memset(a, v, sizeof(a))
#define m_p make_pair
#define all(v) (v.begin(), v.end())
#define loop(type, v, it) for(type::iterator it = v.begin(); it != v.end(); ++it)
#define rep(i, a, n) for(int i = a; i <= n; ++i)
#define rrep(i, a, n) for(int i = n; i>= 0; i--)
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);
#define sfl1(a) scanf("%lld", &a)
#define sfl2(a, b) scanf("%lld %lld", &a, &b)
#define sfl3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c);
#define sfl4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
#define lb lower_bound
#define ub upper_bound
#define fr first
#define sc second
#define exp1 exp(1)


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int cas = 1;
int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
struct node
{
    int x,y;
    bool operator < (const node&p)
    const
    {
        return x < p.x;
    }
};

const int NX = 20 ;
ll dp[2][2][NX][NX];
int vis[2][2][NX][NX];
int lim , tt ;
vector < int > inp ;

ll DP( int pos , int isSmall ,int isStart, int value)
{
    if( pos == lim ) return value ;
    ll &ret = dp[isSmall][isStart][pos][value];
    int &v = vis[isSmall][isStart][pos][value];
    if( v == tt ) return ret ;
    v = tt ;
    int ses = isSmall ? 9 : inp[pos];
    int i ;
    ret = 0 ;
    if( !isStart )  // আগেই নাম্বার বসানো শুরু করে দিছি
    for ( i = 0 ; i <= ses ; i++ )
    {
        ret += DP( pos + 1 , isSmall | i < inp[pos] ,0, (i == 0) + value );
    }
    else
    {
         for ( i = 1 ; i <= ses ; i++ )
    {
        ret += DP( pos + 1 , isSmall | i < inp[pos] ,0, (i == 0) + value );
    }
    ret += DP( pos + 1 , 1 ,1, 0 );
    }
    return ret ;
}

ll Cal( ll x )
{
    if( x < 0 ) return 0 ;
    if( x <= 9 ) return 1 ;
    inp.clear();
    while( x )
    {
        inp.pb(x%10);
        x/=10;
    }
    reverse(inp.begin(),inp.end()); // সুবিধার জন্য রিভারস করে নিচ্ছি , এইটা করতেই হবে
    lim = inp.size();
    tt++;
    return DP( 0 , 0 , 1 , 0 ) + 1; // শুধু ০ টা আলাদা এড করছি
}
int main()
{

     int cs , t;
     sf1(t);
     for ( cs = 1 ; cs <= t ; cs++ )
     {

        ll n, m;
        sfl2(n,m);
        ll ans = Cal(m) - Cal(n-1);
        printf("Case %d: %lld\n",cs,ans);
     }
    return 0;
}
