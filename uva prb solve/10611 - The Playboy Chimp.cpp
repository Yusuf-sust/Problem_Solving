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



int main()
{
    //freopen("10611.txt","w", stdout);
    int n, x, m, y, a[50021], l,h;
    sf("%d", &n);
    for(int i = 0; i < n; i++)
        sf("%d", &a[i]);
    sf("%d", &m);
    for(int i = 1; i <= m; i++)
    {
        int l = 0, h = 0, pl, ph;
        sf("%d", &x);
        y = upper_bound(a,a+n,x)-a;
        int f = y;
        if(a[y-1] == x)
        {
            while(a[y-1] == x)
            {
                y--;
                if(y == 0)
                    break;
            }
            pl = y;
            ph = f+1;
        }
        else
        {
            pl = y;
            ph = y+1;
        }
        if(pl == 0)
            l = 1;
        if(ph == n+1)
            h = 1;
        if(l)
            pf("X ");
        else pf("%d ", a[pl-1]);
        if(h) pf("X\n");
        else pf("%d\n", a[ph-1]);

    }


    return 0;
}
