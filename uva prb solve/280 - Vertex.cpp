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

int visit[110];

vector <int> vc[110], vp;

void dfs(int i)
{
    for(int j = 0; j < vc[i].size(); j++)
    {
        if(!visit[vc[i][j]])
        {
            visit[vc[i][j]] = 1;
            dfs(vc[i][j]);
        }
    }
}



int main()
{
    int n, i, x, y;
    while(sf("%d", &n) == 1 && n)
    {
        memset(visit, 0, sof(visit));
        while(sf("%d", &x) == 1 && x)
        {
            while(sf("%d", &y) == 1 && y)
            {
                vc[x].pb(y);
            }
        }
        int f;
        sf("%d", &f);
        for(i = 1; i <= f; i++)
        {
            sf("%d", &x);
            dfs(x);
            for(int j = 1; j <= n; j++)
                if(!visit[j])vp.pb(j);
            pf("%d", vp.size());
            for(int j = 0; j < vp.size(); j++)
                pf(" %d", vp[j]);
            pf("\n");
            memset(visit, 0, sof(visit));
            vp.clear();
        }
        for(int j = 0; j <= n; j++)vc[j].clear();
    }



    return 0;
}

