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
    db x,y;
    bool operator < (const node&p)
    const
    {
        if(x == p.x)
            return y < p.y;
        return x > p.x;
    }
};

int kheli(db k, db n)
{
    if(n == 0)return 0;
    for(db i = 1; ; i+=1)
    {
        if(pow(k,i)> n)break;
        if(kheli(k,n-pow(k,i)) == 0)
            return 1;
    }
    return 0;
}

int main()
{
    //freopen("powers.in","r",stdin);
    //freopen("standard output","w",stdout);
    int t;
    sf1(t);
    while(t--)
    {
        int n;
        sf1(n);
        vector<node> vc;
        for(int i = 1; i <= n; i++)
        {
            node f;
            db k, m;
            sf("%lf %lf", &k, &m);
            f.x == k;
            f.y = m;
            vc.pb(f);
        }
        sort(vc.begin(),vc.end());

        int ans = kheli(vc[0].x,vc[0].y);
        if(ans)pf("1\n");
        else pf("2\n");
    }

    return 0;
}


