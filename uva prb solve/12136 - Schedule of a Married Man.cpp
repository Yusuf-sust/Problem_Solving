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

int flag(int h1, int m1, int h2, int m2)
{
    int f = 1;
    if(h1 > h2)
    {
        f = 0;
    }
    else if(h1 == h2)
    {
        if(m1 >= m2)
            f = 0;
    }
    return f;
}

int main()
{
    //freopen("12136.txt","w",stdout);
    int t;
    sf1(t);
    while(t--)
    {

        int h1, h2, h3, h4, m1, m2, m3, m4;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        scanf("%d:%d %d:%d", &h3, &m3, &h4, &m4);
        if(flag(h4,m4,h1,m1)||flag(h2,m2,h3,m3))
        {
            pf("Case %d: Hits Meeting\n", cas++);
        }
        else pf("Case %d: Mrs Meeting\n", cas++);
    }

    return 0;
}


