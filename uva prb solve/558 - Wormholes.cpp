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

int cas = 1;
int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
struct node
{
    int x,y;
    bool operator < (const node&p)
    const
    {
        return x < p.x;
    }
};

vector<node> vc;
vector<int> weight;
ll dist[1005];
int flag = 1;

void belmen(int s, int n)
{
    for(int i = 0; i <= n; i++)dist[i] = 1000000000000000;
    dist[s] = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < vc.size(); j++)
        {
            node p = vc[j];
            int u = p.x;
            int v = p.y;
            if(dist[u]+weight[j] < dist[v])
                dist[v] = dist[u]+weight[j];
        }
    }
    for(int j = 0; j < vc.size(); j++)
    {
        node p = vc[j];
        int u = p.x;
        int v = p.y;
        if(dist[u]+weight[j] < dist[v])
        {
            flag = 0;
            break;
            //dist[v] = dist[u]+weight[j];
        }
    }
}
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        flag = 1;
        int n, m, w;
        sf2(n,m);
        vc.clear();
        weight.clear();
        for(int i = 1; i <= m; i++)
        {
            int x, y;
            node p;
            sf3(x,y,w);
            p.x = x;
            p.y  = y;
            vc.pb(p);
            weight.pb(w);
        }
        belmen(0,n);
        if(flag)
            pf("not possible\n");
        else pf("possible\n");
    }

    return 0;
}



