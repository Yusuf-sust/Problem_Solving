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

int mat[110][110], visit[110], cnt, n;

void dfs(int i)
{
    visit[i] = 1;
    cnt++;
    for(int j = 1; j <= n; j++)
    {
        if(mat[i][j] && !visit[j])
            dfs(j);
    }
}

int main()
{
    while(sf("%d", &n) == 1 && n)
    {
        memset(mat, 0, sof mat);
        int m, x;
        for(int i = 1; i <= n; i++)
        {
            sf("%d", &m);
            for(int j = 1; j <= m; j++)
            {
                sf("%d", &x);
                mat[i][x] = 1;
            }
        }
        int mx = -1, ind = 0;
        for(int i = 1; i <= n; i++)
        {
            cnt = 0;
            memset(visit, 0, sof visit);
            dfs(i);
            if(cnt > mx)
            {
                mx = cnt;
                ind = i;
            }
        }
        pf("%d\n", ind);
    }


    return 0;
}

