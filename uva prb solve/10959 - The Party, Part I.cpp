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
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define ve (vc.begin(),vc.end())
#define mod 1000000007
#define m0 memset(a,0,sizeof(a))
#define ms memset(a,-1,sizeof(a))
#define mc memset(s,'0',sizeof(s))
#define mv memset(visit, o, sizeof(visit))
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()

vector <int> vc[1010];
int visit[1010], dis[1010], p[1010][1010];

void bfs()
{
    dis[0] = 0;
    visit[0] = 0;
    queue <int> q;
    q.push(0);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < vc[u].size(); i++)
        {
            int v = vc[u][i];
            if(!visit[v])
            {
                visit[v] = 1;
                dis[v] = dis[u]+1;
                q.push(v);
            }
        }
    }
}


int main()
{
    int t, n, m, x, y;
    sf("%d", &t);
    while(t--)
    {
        memset(visit,0,sof(visit));
        memset(p,0,sof(p));
        sf("%d %d", &n, &m);
        for(int i = 1; i <= m; i++)
        {
            int x,y;
            sf("%d %d", &x, &y);
            if(!p[x][y] && !p[y][x]){
                p[x][y] = 1;
                p[y][x] = 1;
                vc[x].pb(y);
                vc[y].pb(x);
            }
        }
        bfs();
        for(int i = 1; i < n; i++)
        {
            pf("%d\n", dis[i]);
        }
        if(t)pf("\n");
        for(int i = 0; i <= n; i++)vc[i].clear();
    }

    return 0;
}

