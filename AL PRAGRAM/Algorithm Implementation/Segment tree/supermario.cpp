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
#define ull unsigned long lomg
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
#define sfl1(a) scanf("%lld", &a)
#define sfl2(a, b) scanf("%lld %lld", &a, &b)
#define sfl3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c);
#define sfl4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
#define lb lower_bound
#define ub upper_bound
#define fr first
#define sc second
#define exp1 exp(1)


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int cas = 1;
int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
struct node
{
    int x,val;
    bool operator < (const node&p)
    const
    {
        return val < p.val;
    }
};
struct nd
{
    int l, r, h, id;
    bool operator < (const nd&p)
    const
    {
        return h < p.h;
    }
};

int tree[500000];
node ar[100005];
int n, m;

void update(int node, int b, int e, int x)
{
    if(b > x || e < x)return;
    if(b == x && e == x)
    {
        tree[node] = tree[node]+1;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,x);
    update(right,mid+1,e,x);
    tree[node] = tree[left]+tree[right];
}

int query(int node, int b, int e, int x, int y)
{
    if(b > y || e < x)return 0;
    if(b >= x && e <= y)return tree[node];
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,x,y);
    int p2 = query(right,mid+1,e,x,y);
    return p1+p2;
}

int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        mem(tree,0);
        sf2(n, m);
        for(int i = 0; i < n; i++)
        {
            int val;
            sf1(val);
            ar[i].x = i;
            ar[i].val = val;
        }
        sort(ar,ar+n);
        vector <nd> vc;
        for(int i = 1; i <= m; i++)
        {
            int x, y, val;
            sf3(x,y,val);
            nd a;
            a.id = i;
            a.l = x;
            a.r = y;
            a.h = val;
            vc.pb(a);
        }
        sort(vc.begin(),vc.end());
        int st = 0;
        int f[100005];
        for(int i = 0; i < vc.size(); i++)
        {
            nd a = vc[i];
            int b = a.h;
            int j;
            for(j = st; j < n; j++)
            {
                if(ar[j].val > b)
                    break;
                update(1,0,n-1,ar[j].x);
            }
            st = j;
            f[a.id] = query(1,0,n-1,a.l,a.r);
        }
        pf("Case %d:\n", cas++);
        for(int i = 1; i <= m; i++)
        {
            pf("%d\n", f[i]);
        }
    }

    return 0;
}


