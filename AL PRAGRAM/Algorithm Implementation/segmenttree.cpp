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


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int cas = 1;

int a[1000];
int tree[4000], lazy[4000];

void build(int b, int e, int node)
{
    if(b == e)
    {
        tree[node] = a[b];
        return;
    }
    int mid = (b+e)/2;
    build(b,mid, node*2);
    build(mid+1,e,node*2+1);
    tree[node] = tree[node*2]+tree[node*2+1];
}

void update(int b, int e, int node, int l, int r, int val)
{
    if(lazy[node])
    {
        tree[node] += (e-b+1)*lazy[node];
        if(b!=e)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(b > r || e < l)
        return;
    if(b >= l && e <= r)
    {
        tree[node] += (e-b+1)*val;
        if(b!=e)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }

    int mid = (b+e)/2;
    update(b,mid,node*2,l,r,val);
    update(mid+1,e,node*2+1,l,r,val);
    tree[node] = tree[node*2]+tree[node*2+1];
}

int query(int b, int e, int node, int l, int r)
{
    if(lazy[node])
    {
        tree[node] += (e-b+1)*lazy[node];
        if(b!=e)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(b > r || e < l)
        return 0;
    if(b >= l && e <= r)
    {
        return tree[node];
    }

    int mid = (b+e)/2;
    int p = query(b,mid,node*2,l,r);
    int q = query(mid+1,e,node*2+1,l,r);
    return (p+q);
}

int main()
{
    mem(lazy,0);
    int n, q;
    sf2(n,q);
    for(int i = 1; i <= n; i++)
    {
        sf1(a[i]);
    }
    build(1,n,1);
    while(q--)
    {
        int t, x, y, val;
        sf1(t);
        if(t == 2)
        {
            sf3(x,y,val);
            update(1,n,1,x,y,val);
        }
        else
        {
            sf2(x,y);
            cout<<query(1,n,1,x,y)<<endl;
        }
    }

    return 0;
}



