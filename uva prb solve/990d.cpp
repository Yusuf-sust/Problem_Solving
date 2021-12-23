#include<bits/stdc++.h>
using namespace std;
struct gold
{
    int d,w,t,j;
} ara[100];
int t,mx;
int dp[1002][100];
int take[1003][101];
int fun(int i,int sum)
{
    if(sum==0 || i<=0) return 0;
    if(dp[sum][i]!=-1) return dp[sum][i];
    int a=0,b=0;
    if(ara[i].t<=sum) a=ara[i].w+fun(i-1,sum-ara[i].t);
    b=fun(i-1,sum);
    if(a>b) take[sum][i]=1;
    return dp[sum][i]=max(a,b);
}

int main()
{
    int i,j,k,l,x=0,y,z,n,d,w;
    while(cin>>t>>w)
    {
        if(x>0) printf("\n");
        cin>>n;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&ara[i].d,&ara[i].w);
            ara[i].t=3*ara[i].d*w;
            ara[i].j=i;
        }
        mx=0;
        memset(dp,-1,sizeof(dp));

        memset(take,0,sizeof(take));
        printf("%d\n",fun(n,t));
        int vis[100],cnt=0;
        memset(vis,0,sizeof(vis));
        y=n;
        z=t;
        while(y>0)
        {
            if(take[z][y])
            {
                z=z-ara[y].t;
                vis[y]=1;
                cnt++;
            }
            y--;
        }
        printf("%d\n",cnt);
        for(j=1; j<=n; j++)
        {
            if(vis[j]) printf("%d %d\n",ara[j].d,ara[j].w);
        }
        x++;
    }
    return 0;
}
