#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
#define PB push_back
using namespace std ;
#define MAX_N 1010
#define MAX_W 1010
int n,coun=0;

vector<int>vc;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int dp[50][250000];
int weight[100];
int goods[100];
int cost[MAX_N+1];
int CAP;
int func(int i,int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=CAP)
    {
        profit1=cost[i]+func(i+1,w+weight[i]);
    }
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
void path(int i,int w)
{
    if(i==n&&dp[i][w]==cost[i])
    {
        vc.push_back(i);
        return;
    }
    else if(i==n)return;
    if(dp[i][w]==cost[i]+dp[i+1][weight[i]+w]&&dp[i+1][weight[i]+w]!=-1)
    {
        vc.push_back(i);
        path(i+1,w+weight[i]);
    }
    else
    {
        path(i+1,w);
    }

}
int main()
{
    int m,t,i,w,toll=0;
    while(scanf("%d%d",&CAP,&w)==2)
    {
        if(toll==1)printf("\n");
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&goods[i],&cost[i]);
            weight[i]=(goods[i]*w)+(2*w*goods[i]);
        }
        int sum=0;
        memset(dp,-1,sizeof(dp));

        sum=func(1,0);
        printf("%d\n",sum);
        vc.clear();
        if(n!=0)
            path(1,0);
        toll=1;
        printf("%d\n",vc.size());
        for(i=0; i<vc.size(); i++)printf("%d %d\n",goods[vc[i]],cost[vc[i]]);
    }
    return 0;
}
