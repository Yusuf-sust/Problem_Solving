
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
    int l,r;
};

node a[100005];

int main()
{
    int n, m;
    sf2(n,m);
    char s[100005];
    getchar();
    gets(s);
    queue <int> q;
    stack <int> stk;
    for(int i = 1; i <= n; i++)
    {
        if(s[i-1] == '0')
        {
            stk.push(i);
            a[i].l = i;
        }
        else
        {
            if(stk.empty())
            {
                a[i].l = 0;
            }
            else
            {
                a[i].l = stk.top();
            }
        }
    }
    stack <int> stkk;
    for(int i = n; i >= 1; i--)
    {
        if(s[i-1] == '0')
        {
            stkk.push(i);
            a[i].r = i;
        }
        else
        {
            if(stkk.empty())
            {
                a[i].r = 0;
            }
            else
            {
                a[i].r = stkk.top();
            }
        }
    }
    int cnt = 0;
    int mx = 10000000;
    for(int i = 1; i <= n; i++)
    {
        if(s[i-1] == '0')
        {
            q.push(i);
            cnt++;
        }
        if(cnt == m+1)
        {
            int mid = (q.front()+i)/2;
            int lf = a[mid].l;
            int rr = a[mid].r;
            int x = max(lf-q.front(),i-lf);
            int y = max(rr-q.front(), i - rr);
            x = min(x,y);
            if(x < mx)
                mx = x;
            cnt--;
            q.pop();
        }
    }

    pf("%d\n", mx);

    return 0;
}


