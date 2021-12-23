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

int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int cas = 1;

vector <int> vc[1010];
int visit[1010], tag[1010];
int lp;
void dfs(int u)
{
    tag[u] = 1;
    visit[u] = 1;
    for (int i = 0; i < vc[u].size(); i++)
    {
        if (!visit[vc[u][i]])
            dfs(vc[u][i]);
        if (tag[vc[u][i]] == 1)
            lp = 1;
    }
    tag[u] = 0;
}
int main()
{
    int t;
    sf1(t);
    while (t--)
    {
        mem(visit, 0);
        mem(tag, 0);
        lp = 0;
        int n;
        sf1(n);
        for (int i = 0; i <= n + 1; i++)
            vc[i].clear();
        for (int i = 1; i <= n; i++)
        {
            getchar();
            char ch;
            sf("%c", &ch);
            if (ch == 'A')
            {
                vc[i].pb(i+1);
            }
            else if (ch == 'J')
            {
                int x;
                sf1(x);
                vc[i].pb(x);
            }
            else if (ch == 'C')
            {
                int x;
                sf1(x);
                vc[i].pb(x);
                vc[i].pb(i+1);
            }
        }
        dfs(1);
        int ed = visit[n+1];
        if (!lp && ed)
            pf("ALWAYS\n");
        else if (lp && !ed)
            pf("NEVER\n");
        else
            pf("SOMETIMES\n");
    }
    return 0;
}
