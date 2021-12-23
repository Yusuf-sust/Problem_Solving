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

ll r[510] = {0}, c[510] = {0}, d1 = 0, d2 = 0, val;
int main()
{
    int n, x, y, flag = 1;
    sf1(n);
    if(n == 1)
    {
        pf("1\n");
        return 0;
    }
    ll a, b;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            sf1(val);
            if(val == 0)
            {
                x = i, y = j;
            }
            r[i] += val;
            c[j] += val;
            if(i == j) d1 += val;
            if(i+j == n+1) d2 += val;
        }
    }
    if(x != 1)
        a = r[1];
    else a = r[2];
    if(a <= r[x])
    {
        pf("-1\n");
        return 0;
    }
    b = a - r[x];
    if(x == y)
        d1 += b;
    if(x + y == n + 1)
        d2 += b;
    r[x] += b;
    c[y] += b;
    if(d1 != d2 || d1 != r[1])
    {
        pf("-1\n");
        return 0;
    }
    for(int i = 1; i < n; i++)
    {
        if(r[i] != r[i+1] || c[i] != c[i+1] || r[i] != c[i])
        {
            pf("-1\n");
            flag = 0;
            break;
        }
    }
    if(flag) pf("%I64d\n", b);

    return 0;
}



