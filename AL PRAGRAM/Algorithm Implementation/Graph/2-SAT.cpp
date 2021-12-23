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
vector <int> vc[100000], rvc[100000];
bool visit[200000];
int tm, finish[100000], scc_no[100000];

void dfs1(int u)
{
    visit[u] = true;
    tm++;
    for(int i = 0; i < vc[u].size(); i++)
    {
        int v = vc[u][i];
        if(!visit[v])
            dfs1(v);
    }
    finish[u] = ++tm;
}

void dfs2(int u, int no)
{
    visit[u] = true;
    scc_no[u] = no;
    tm++;
    for(int i = 0; i < rvc[u].size(); i++)
    {
        int v = rvc[u][i];
        if(!visit[v])
            dfs2(v,no);
    }
    finish[u] = ++tm;
}

int main()
{
    int n, m;
    sf2(n,m);
    while(m--)
    {
        int x, y;
        sf2(x,y);
        if(x > 0)
        {
            if(y > 0)
            {
                vc[n+x].pb(y);
                vc[n+y].pb(x);
                rvc[y].pb(n+x);
                rvc[x].pb(n+y);
            }
            else
            {
                y = abs(y);
                vc[n+x].pb(n+y);
                vc[y].pb(x);
                rvc[n+y].pb(n+x);
                rvc[x].pb(y);
            }
        }
        else
        {
            x = abs(x);
            if(y > 0)
            {
                vc[n+y].pb(n+x);
                vc[x].pb(y);
                rvc[n+x].pb(n+y);
                rvc[y].pb(x);
            }
            else
            {
                y = abs(y);
                vc[x].pb(n+y);
                vc[y].pb(n+x);
                rvc[n+y].pb(x);
                rvc[n+x].pb(y);
            }
        }
    }
    tm = 0;
    mem(visit,false);
    for(int i = 1; i <= 2*n; i++)
    {
        if(!visit[i])
            dfs1(i);
    }
    mem(visit,false);
    vector<pii> v;
    for(int i = 1; i <= 2*n; i++)
    {
        v.pb(make_pair(finish[i],i));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    tm = 0;
    for(int i = 0, k = 1; i < 2*n; i++)
    {
        int j = v[i].second;
        if(!visit[j])
        {
            dfs2(j,k);
            k++;
        }
    }
    bool flag = true;
    mem(visit,false);
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(scc_no[i] == scc_no[n+i])
        {
            flag = false;
            break;
        }
        if(finish[i] > finish[n+i])
        {
            visit[i] = true;
            cnt++;
        }
        else
        {
            visit[i] = false;
            visit[n+i] = true;
        }

    }
    if(flag)
    {
        pf("Yes\n");
        int f = 1;
        pf("%d", cnt);
        for(int i = 1; i <= n; i++)
        {
            if(visit[i])
            {
               pf(" %d", i);
            }
        }
        pf("\n");
    }
    else
        pf("No\n");

    return 0;
}


