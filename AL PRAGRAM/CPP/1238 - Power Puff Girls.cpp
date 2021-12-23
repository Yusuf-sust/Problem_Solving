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

int cas = 1;


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

pii p;
int dist[50][50], visit[50][50], n, m;
char st2[50][50];

void bfs(int i, int j)
{
    visit[i][j] = 1;
    dist[i][j] = 0;
    queue <pii> q;
    q.push(make_pair(i,j));
    while(!q.empty())
    {
        pii px = q.front();
        q.pop();
        int u = px.first;
        int v = px.second;
        for(int f = 0; f <= 3; f++)
        {
            int x, y;
            x = u + dx[f];
            y = v + dy[f];
            if(st2[x][y] != '#' && st2[x][y] != 'm' && !visit[x][y] && x >= 1 && x <= n && y >= 1 && y <= m)
            {
                visit[x][y] = 1;
                dist[x][y] = dist[u][v]+1;
                q.push(make_pair(x,y));
            }
        }
    }
}

int main()
{
    int t;
    sf("%d ", &t);
    while(t--)
    {
        sf("%d %d ", &n, &m);
        int ax, ay, bx, by, cx, cy, hx, hy;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                char ch;
                sf("%c", &ch);
                st2[i][j] = ch;
                if(ch == 'a')
                {
                    ax = i, ay = j;
                }
                else if(ch == 'b')
                {
                    bx = i, by = j;
                }
                else if(ch == 'c')
                {
                    cx = i, cy = j;
                }
                else if(ch == 'h')
                {
                    hx = i, hy = j;
                }
            }
            getchar();
        }
        mem(dist,0);
        mem(visit,0);
        int mx = -1000;
        bfs(ax,ay);
        if(mx < dist[hx][hy])
        {
            mx = dist[hx][hy];
        }
        mem(dist,0);
        mem(visit,0);
        bfs(bx,by);
        if(mx < dist[hx][hy])
        {
            mx = dist[hx][hy];
        }
        mem(dist,0);
        mem(visit,0);
        bfs(cx,cy);
        if(mx < dist[hx][hy])
        {
            mx = dist[hx][hy];
        }
        pf("Case %d: %d\n", cas++, mx);
    }

    return 0;
}



