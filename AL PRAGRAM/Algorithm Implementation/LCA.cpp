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
#define rrep(i, a, n) for(int i = n; i>= a; i--)
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

int parent[100000][50], level[100000], visit[100000] = {0};
vi vc[100000];

void bfs(int start)
{
    visit[start] = 1;
    level[start] = 0;
    queue <int> q;
    q.push(start);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        rep(i, 0, vc[u].size()-1)
        {
            int v = vc[u][i];
            if(!visit[v])
            {
                visit[v] = 1;
                level[v] = level[u]+1;
                parent[v][0] = u;
                q.push(v);
            }
        }
    }
}

int lca_query(int N, int p, int q)
  {
      int tmp, log, i;

      if (level[p] < level[q])
          tmp = p, p = q, q = tmp;

        log=1;
      while(1) {
        int next=log+1;
        if((1<<next)>level[p])break;
        log++;

      }

        for (i = log; i >= 0; i--)
          if (level[p] - (1 << i) >= level[q])
              p = parent[p][i];

      if (p == q)
          return p;

        for (i = log; i >= 0; i--)
          if (parent[p][i] != -1 && parent[p][i] != parent[q][i])
              p = parent[p][i], q = parent[q][i];

      return parent[p][0];
  }

int main()
{
    mem(parent, -1);
    mem(visit,0);
    mem(level,0);
    int n, m, x, y;
    sf2(n, m);
    rep(i,1,m)
    {
        sf2(x,y);
        vc[x].pb(y);
        vc[y].pb(x);
    }
    bfs(1);
    for(int j = 1; (1 << j) < n; j++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(parent[i][j-1] != -1)
            {
                parent[i][j] = parent[parent[i][j-1]][j-1];
                //P[i][j] = P[P[i][j - 1]][j – 1];
            }
        }
    }
    int p,q;
    sf2(p,q);
    int ans = lca_query(n, p, q);
    pf("%d\n", ans);

    return 0;
}

