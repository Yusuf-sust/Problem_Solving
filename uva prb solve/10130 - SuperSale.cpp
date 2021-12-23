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

int dp[1010][100], weight[1010], cost[1010];
int n, capa;

int napsak(int i, int w)
{
    if(i == n+1)
        return 0;
    if(dp[i][w] != -1)return dp[i][w];
    int cost1 = 0, cost2 = 0;
    if(w + weight[i] <= capa)
        cost1 = cost[i] + napsak(i+1, w+weight[i]);
    cost2 = napsak(i+1, w);
    dp[i][w] = max(cost1,cost2);
    return dp[i][w];
}

int main()
{
    int t, m, sum;
    sf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        sum = 0;
        memset(dp, -1, sof(dp));
        sf("%d", &n);
        for(int j = 1; j <= n; j++)
        {
            sf("%d %d", &cost[j], &weight[j]);
        }
        sf("%d", &m);
        for(int j = 1; j <= m; j++)
        {
            memset(dp, -1, sof(dp));
            sf("%d", &capa);
            sum += napsak(1,0);
        }
        pf("%d\n", sum);
    }


    return 0;
}


