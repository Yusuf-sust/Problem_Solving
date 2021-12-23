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

int dis[100000], low[100000], visit[100000], c, p, prt, apt[100000], parent[100000];
vector <int> vc[100000];

void art(int start)
{
    visit[start] = 1;
    p++;
    dis[start] = p, low[start] = p;
    for(int i = 0; i < vc[start].size(); i++)
    {
        int u = vc[start][i];
        if(parent[start] == u)
            continue;
        if(visit[u])
            low[start] = min(dis[u], low[start]);
        else
        {
            parent[start] = u;
            art(u);
            low[start] = min(low[u], low[start]);
            if(dis[start] <= low[u])
            {
                apt[start] = 1;
               // pf("YES %d\n", start);
            }
            if(start == 1)
                c++;
        }
    }
}


int main()
{
    int t, n, m, x, y;
    sf("%d", &t);
    while(t--)
    {
        c = 0, p = 0, prt = 1, parent[1] = 1;
        memset(apt,0, sof apt);
        memset(visit,0,sof visit);
        sf("%d %d", &n, &m);
        for(int i = 0; i <= n; i++)vc[i].clear();
        for(int j = 1; j <= m; j++)
        {
            sf("%d %d", &x, &y);
            vc[x].pb(y);
            vc[y].pb(x);
        }
        art(1);
        int res = 0;
        if(c >= 2)
            res++;
        for(int i = 2; i <= n; i++)
        {
            if(apt[i])
                res++;
        }
        pf("%d\n", res);
    }

    return 0;
}

