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

int main()
{
    int n, m;
    while(sf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)break;
        int visit[110] = {0}, a[110][110] = {0}, ind[110] = {0}, ans[110];
        for(int i = 1; i <= m; i++)
        {
            int x, y;
            sf("%d %d", &x, &y);
            a[x][y] = 1;
            ind[y]++;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(!visit[j] && !ind[j])
                {
                    visit[j] = 1;
                    ans[i] = j;
                    for(int k = 1; k <= n; k++)
                    {
                        if(!visit[k] && a[j][k])ind[k]--;
                    }
                    break;
                }
            }
        }

        for(int i = 1; i < n; i++)
            pf("%d ", ans[i]);
        pf("%d\n", ans[n]);

    }


    return 0;
}

