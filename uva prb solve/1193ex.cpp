#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <deque>
#include <list>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<pii> vpii;
typedef map<int, int> mpii;
#define gcd(a, b) __gcd(a, b)
#define clr(a) memset(a, 0, sizeof(a))
#define mem(a, b) memset(a, b, sizeof(a))
#define REP(i, a, n) for(int i = a; i < n; ++i)
#define REPE(i, a, n) for(int i = a; i <= n; ++i)
#define RREP(i, a, n) for(int i = a; i > n; --i)
#define RREPE(i, a, n) for(int i = a; i >= n; --i)
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define fr first
#define sc second
#define pb push_back
#define pp pop_back
#define ins insert
#define mp make_pair
#define IT iterator
#define allof(v) v.begin(), v.end()
#define ssort(v) stable_sort(v.begin(), v.end())
#define LB lower_bound
#define UB upper_bound
#define POPC __builtin_popcount
#define loop(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); ++i)
#define rloop(i, x) for(__typeof((x).rbegin()) i = (x).rbegin(); i != (x).rend(); ++i)
const double PI = 2.0 * acos(0.0);
const double EXP = exp(1);
template<typename T> inline T sqr(T n)
{
    return n * n;
}
inline double hypot(double x, double y)
{
    return sqrt(sqr(x) + sqr(y));
}
template<typename T> inline T pmod(T n, T m)
{
    return ((n % m) + m) % m;
}

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
    point p;

    while(sf2(n, d) == 2)
    {
        if(n == 0 && d == 0) break;

        vp.clear();
        REP(i, 0, n)
        {
            sf2(p.x, p.y);
            vp.pb(p);
        }

        ssort(vp);

        double last;
        int cnt = -1;
        loop(i, vp)
        {
            if(d < i->y)
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
                double md = sqr(last - i->x) + sqr(i->y);
                if(md <= sqr(d)) continue;
                ++cnt;
            }
            last = i->x + sqrt(sqr(d) - sqr(i->y));
        }

        printf("Case %d: %d\n", cas++, cnt);
    }

    return 0;
}
