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

char ss[30][20];
long long int ar[30][30];



int main()
{
    int n, m, t = 1;
    while(sf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)break;
        getchar();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                ar[i][j] = 1000000000000000;
        }
        for(int i = 1; i <= n; i++)
            gets(ss[i]);
        for(int i = 1; i <= m; i++)
        {
            int x, y, z;
            sf("%d %d %d ", &x, &y, &z);
            ar[x][y] = z;
            ar[y][x] = z;
        }
        for(int k = 1; k <= n; k++)
        {
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= n; j++)
                {
                    if(ar[i][j] > (ar[i][k] + ar[k][j]))
                        ar[i][j] = (ar[i][k] + ar[k][j]);
                }
            }
        }
        long long int f = 1000000000000000;
        int a = 1;
        for(int i = 1; i <= n; i++)
        {
            long long int sum = 0;
            for(int j = 1; j <= n; j++)
            {
                if(i != j)sum += ar[i][j];
            }
             if(sum < f)
             {
                 f = sum;
                 a = i;
             }
        }
        pf("Case #%d : %s\n", t++, ss[a]);
    }


    return 0;
}

