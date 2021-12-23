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

vector<int> vc;
int dp[50][250000];
int weight[100];
int cost[100];
int CAP, n;
int napsak(int i,int w)
{
    if(i == n+1) return 0;
    if(dp[i][w] != -1) return dp[i][w];
    int profit1 = 0, profit2 = 0;
    if(w + weight[i] <= CAP)
    {
        profit1 = cost[i] + napsak(i+1, w + weight[i]);
    }
    profit2 = napsak(i+1, w);
    dp[i][w]= max(profit1, profit2);
    return dp[i][w];
}
void path(int i,int w)
{
    if(i == n && dp[i][w] == cost[i])
    {
        vc.push_back(i);
        return;
    }
    else if(i == n)return;
    if(dp[i][w] == cost[i]  +dp[i+1][weight[i]+w] && dp[i+1][weight[i]+w] != -1)
    {
        vc.push_back(i);
        path(i+1, w+weight[i]);
    }
    else
    {
        path(i+1, w);
    }

}
int main()
{
    int i, w, t = 0;
    while(sf("%d %d", &CAP, &w) == 2)
    {
        if(t)pf("\n");
        t++;
        sf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            sf("%d %d",&weight[i], &cost[i]);
            weight[i] *= 3*w;
        }
        int sum=0;
        memset(dp, -1, sof(dp));
        sum = napsak(1, 0);
        pf("%d\n", sum);
        vc.clear();
        if(n!=0)
            path(1, 0);
        pf("%d\n", vc.size());
        for(i=0; i < vc.size(); i++)pf("%d %d\n",weight[vc[i]]/(3*w), cost[vc[i]]);
    }
    return 0;
}


