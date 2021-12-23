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

int visit[11000];

vector <int> vc[11000];

void dfs(int i)
{
    visit[i] = 1;
    for(int j = 0; j < vc[i].size(); j++)
    {
        if(!visit[vc[i][j]])
        {
            dfs(vc[i][j]);
        }
    }
}



int main()
{
    int m, n, o, t;
    sf("%d", &t);
    while(t--)
    {
        int cnt = 0;
        memset(visit, 0, sof(visit));
        sf("%d %d %d", &n, &m, &o);
        for(int i = 1; i <= m; i++)
        {
            int x, y;
            sf("%d %d", &x, &y);
            vc[x].pb(y);
        }
        for(int i = 1; i <= o; i++)
        {
            int x;
            sf("%d", &x);
            dfs(x);

        }
        for(int i = 1; i <= n; i++)
            if(visit[i])cnt++;
        pf("%d\n", cnt);
        for(int i = 0; i <= n; i++)vc[i].clear();
    }

    return 0;
}


