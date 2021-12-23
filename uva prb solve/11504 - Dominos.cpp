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
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()

struct node
{
    int f, e;
    bool operator <(const node&p)const
    {
        return e > p.e;
    }
};

int ed[100010], visit[100010], cnt;
vector <int> vc[100010];
vector <node> vp;

void dfs(int j)
{
    visit[j] = 1;
    for(int i = 0; i < vc[j].size(); i++)
    {
        if(!visit[vc[j][i]])
        {
            cnt++;
            dfs(vc[j][i]);
            ed[vc[j][i]] = cnt++;
        }
    }

}
void ddfs(int j)
{
    visit[j] = 1;
    for(int i = 0; i < vc[j].size(); i++)
    {
        if(!visit[vc[j][i]])
        {
            ddfs(vc[j][i]);
        }
    }

}


int main()
{
    int t, n, m, x, y;
    sf("%d", &t);
    while(t--)
    {
        cnt = 1;
        memset(visit, 0, sof(visit));
        memset(ed, 0, sof(ed));
        sf("%d %d", &n, &m);
        for(int i = 1; i <= m; i++)
        {
            sf("%d %d", &x, &y);
            vc[x].pb(y);
        }
        for(int i = 1; i <= n; i++)
        {
            if(visit[i] == 0)
            {
                dfs(i);
                ed[i] = cnt++;
            }
        }
        for(int i = 1; i <= n; i++)
        {
            node x;
            x.f = i;
            x.e = ed[i];
            vp.pb(x);
        }
        sort(vp.begin(), vp.end());
        cnt = 0;
        memset(visit, 0, sof(visit));
        for(int i = 0; i < vp.size(); i++)
        {
            node g;
            g = vp[i];
            m = g.f;
            if(!visit[m])
            {
                cnt++;
                ddfs(m);
            }
        }
        pf("%d\n", cnt);
        for(int i = 0; i <= n; i++)
            vc[i].clear();
        vp.clear();
    }

    return 0;
}

