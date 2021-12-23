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
#include <deque>
#include <list>
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define mod 1000000007
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
#define gcd(a,b) __gcd(a,b)
#define logab(a,b) (log(a) / lob(b))
#define mem(a,v) memset(a, v, sizeof(a))
#define m_p make_pair
#define all(v) (v.begin(), v.end())
#define loop(type, v, it) for(type::iterator it = v.begin(); it != v.end(); ++it)
#define rep(i, a, n) for(int i = a; i <= n; ++i)
#define rrep(i, a, n) for(int i = n; i>= 0; i--)
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);
#define lb lower_bound
#define ub upper_bound
#define fr first
#define sc second
#define exp1 exp(1)

int cas = 1;


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int a[200010];

struct node
{
    int pos, tar, val;
    bool operator <(const node&p)
    const
    {
        if(val == p.val)
            return pos > p.pos;
        return val > p.val;
    }
} q[200010];

int main()
{
    int n, m, f = 1;
    sf2(n,m);
    for(int i = 0; i < n; i++)
        sf1(a[i]);
    for(int i = 0; i < m; i++)
    {
        int x, y;
        sf2(x,y);
        q[i].pos = f++;
        q[i].tar = x;
        q[i].val = y;
    }
    sort(q,q+m);
    int p = 0;
    for(int i = 0; i < m; i++)
    {
        if(q[i].pos >= p)
        {
            sort(a,a+q[i].val);
            if(q[i].tar == 2)
            {
                reverse(a,a+q[i].val);
            }
            p = q[i].pos;
        }
    }
    for(int i = 0; i < n-1; i++)
        pf("%d ", a[i]);
    pf("%d\n", a[n-1]);

    return 0;
}





