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
int f,n;

bool visit[210][210];
char s[210][210];

void dfs(int i, int j)
{
    if(visit[i][j] == true)return;
    else visit[i][j] = true;
    if(i == n && s[i][j] == 'b')
    {
        f = 1;
        return;
    }
    if(s[i][j] != 'b')return;
    dfs(i-1,j-1);
    dfs(i-1,j);
    dfs(i,j-1);
    dfs(i, j+1);
    dfs(i+1,j);
    dfs(i+1,j+1);

}

int main()
{
    while(sf1(n) == 1 && n)
    {
        getchar();
        memset(s,'.', sof s);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                sf("%c", &s[i][j]);
            }
            getchar();
        }
        memset(visit, false, sof visit);
        f = 0;
        for(int i = 1; i <= n; i++)
        {
            if(s[1][i] == 'b')
                dfs(1,i);
            if(f)
                break;
        }
        if(f)pf("%d B\n", cas++);
        else pf("%d W\n", cas++);
    }

    return 0;
}


