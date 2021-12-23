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

int a[10000], n, dp[10000], dir[10000];

int longest(int u)
{
    if(dp[u] != -1)return dp[u];
    int mx = 0;
    for(int i = u+1; i <= n; i++)
    {
        if(a[i] > a[u])
        {
            if(mx < longest(i))
            {
                mx = longest(i);
                dir[u] = i;
            }
        }
    }
    dp[u] = 1 + mx;
    return dp[u];
}
void print(int start)
{
    while(dir[start] != -1)
    {
        pf("%d\n", a[start]);
        start = dir[start];
    }
    pf("%d\n", a[start]);
}

int main()
{
    sf1(n);
    for(int i = 1; i <= n; i++)
        sf1(a[i]);
    mem(dp,-1);
    mem(dir, -1);

    int mx = 0, pos = 0;
    for(int i = 1; i <= n; i++)
    {
        int ans = longest(i);
        if(mx < ans)
        {
            mx = ans;
            pos = i;
        }
    }
    pf("%d\n", mx);
    print(pos);

    return 0;
}


