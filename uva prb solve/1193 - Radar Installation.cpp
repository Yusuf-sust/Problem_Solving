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


int test, cas = 1;

struct point
{
    int x;
    int y;

    bool operator < (const point& r) const
    {
        if(x == r.x) return y > r.y;
        return x < r.x;
    }
};

vector<point> vp;

int main()
{
    int n, d;
    while(sf("%d %d", &n, &d) == 2)
    {
        if(n == 0 && d == 0) break;

        vp.clear();
        point p;
        for(int i = 0; i < n; i++)
        {
            sf("%d %d", &p.x, &p.y);
            vp.pb(p);
        }

        sort(vp.begin(),vp.end());

        double last;
        int cnt = -1;
        for(int i = 0; i < vp.size(); i++)
        {
            if(d < vp[i].y)
            {
                cnt = -1;
                break;
            }

            if(cnt == -1)
            {
                cnt = 1;
            }
            else
            {
                p = vp[i];
                double md = sqrt(last - p.x) + sqrt(p.y);
                if(md <= sqrt(d)) continue;
                ++cnt;
            }
            p = vp[i];
            last = p.x + sqrt(sqrt(d) - sqrt(p.y));
        }

        printf("Case %d: %d\n", cas++, cnt);
    }

    return 0;
}
