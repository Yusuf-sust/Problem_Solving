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

int dp[10][10000], a[] = {1,5,10,25,50};

int coin(int i, int w)
{
    if(i >= 5)
    {
        if(w == 0)return 1;
        else return 0;
    }
    if(dp[i][w] != -1)return dp[i][w];
    int cost1 = 0, cost2 = 0;
    if((w - a[i]) >= 0)
        cost1 = coin(i, w-a[i]);
    cost2 = coin(i+1, w);
    dp[i][w] = (cost1 + cost2);
    return dp[i][w];
}


int main()
{
    int capa;
    memset(dp, -1, sof(dp));
    while(sf("%d", &capa) == 1)
    {
        int res = coin(0,capa);
        pf("%d\n", res);
    }
    return 0;
}



