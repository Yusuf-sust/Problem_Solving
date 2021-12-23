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

int n, s;
vector<int> vc[110];
int finish[110], dp[110];

int path(int u)
{
    if(dp[u] != -1)
        return dp[u];
    if(vc[u].size() == 0 )
    {
        finish[u] = u;
        return dp[u] = 0;
    }
    int mx = -1;
    for(int i = 0; i < vc[u].size(); i++)
    {
        if(mx == path(vc[u][i])+1)
        {
            finish[u] = min(finish[u], finish[vc[u][i]]);
        }
        else if(mx < path(vc[u][i]) + 1)
        {
            mx = path(vc[u][i]) + 1;
            finish[u] = finish[vc[u][i]];
        }
    }
    return dp[u] = mx;


}

int main()
{
    int T = 1;
    while(sf("%d", &n) == 1 && n)
    {
        sf("%d", &s);
        for(int i = 0; i <= 105; i++)
        {
            dp[i] = -1;
            finish[i] = 1000000;
        }
        int x, y;
        while(sf("%d %d", &x, &y) == 2 && x)
        {
            vc[x].pb(y);
        }
        path(s);
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n", T++, s, dp[s], finish[s]);

        for(int i = 0 ; i <= n; i++)vc[i].clear();

    }

    return 0;
}
