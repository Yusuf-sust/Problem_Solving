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
        return y > p.y;
    }
};
vector <node> finish;
int visit[10010], start[10010];
vector <int> vc[10010];

int c;

void dfs(int u)
{
    if(visit[u])return;
    start[u] = c++;
    visit[u] = 1;
    for(int i = 0; i < vc[u].size(); i++)
    {
        int v = vc[u][i];
        if(!visit[v])
            dfs(v);
    }
    //finish[u] = c++;
    node p;
    p.x = u;
    p.y = c++;
    finish.pb(p);
}
int flag;
void dfs1(int u)
{
    if(visit[u])return;
    visit[u] = 1;
    for(int i = 0; i < vc[u].size(); i++)
    {
        int v = vc[u][i];
        dfs1(v);
    }
}

int main()
{

    int t;
    sf1(t);
    while(t--)
    {
        for(int i = 0; i <= 10005; i++)vc[i].clear();
        mem(visit,0);
        finish.clear();
        int n, m;
        sf2(n,m);
        c = 1;
        for(int i = 1; i <= m; i++)
        {
            int x, y;
            sf2(x,y);
            vc[x].pb(y);
        }
        for(int i = 1; i <= n; i++)
        {
            if(!visit[i])
            {
                dfs(i);
            }
        }
        mem(visit,0);
        sort(finish.begin(),finish.end());
        int cnt = 0;
        for(int i = 0; i < finish.size(); i++)
        {
            if(!visit[finish[i].x]){
                dfs1(finish[i].x);
                cnt++;
            }
        }
        pf("Case %d: %d\n", cas++, cnt);
    }

    return 0;
}




