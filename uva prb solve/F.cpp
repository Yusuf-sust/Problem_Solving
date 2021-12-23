#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long int LL;

const int maxn=2222;

int n;
LL d[maxn][maxn];

int main()
{
    scanf("%d",&n);
    bool flag=true;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%I64d",&d[i][j]);
            if(i==j&&d[i][j]) flag=false;
        }
    }
    for(int i=1; i<=n&&flag; i++)
        for(int j=1; j<=n&&flag; j++)
        {
            if(d[i][j]!=d[j][i]) flag=false;
            if(i!=j&&d[i][j]==0) flag=false;
        }
    if(flag==false)
    {
        puts("NO");
        return 0;
    }
    for(int i=1; i<=n&&flag; i++)
    {
        LL MINI=(1LL<<62),pos=-1;
        for(int j=1; j<=n; j++)
        {
            if(d[i][j]<MINI&&i!=j)
            {
                MINI=d[i][j];
                pos=j;
            }
        }
        for(int j=1; j<=n&&flag; j++)
        {
            if(j==i||j==pos) continue;
            if(abs(d[pos][j]-d[i][j])!=d[i][pos])
            {
                flag=false;
            }
        }
    }
    if(flag==false)
    {
        puts("NO");
    }
    else
    {
        puts("YES");
    }
    return 0;
}
