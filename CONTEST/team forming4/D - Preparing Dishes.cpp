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
    int x,y;
    bool operator < (const node&p)
    const
    {
        return x < p.x;
    }
};

vector <pii> vc;

int banai(int x)
{
    int cnt = 0;
    int tm = 0;
    for(int i = 0; i <vc.size(); i++)
    {
        pii a = vc[i];
        int t1 = a.first;
        int t2 = a.second;
        if(t1 <= x)
        {
            cnt++;
        }
        else if(t2 <= x)
        {
            if(t2 <= (2*x)-tm)
            {
                cnt++;
                tm += t2;
            }
        }
    }
    return cnt;
}

int binary()
{
    int low = 1, high = 1000, mid, flag = 1;
    while(flag)
    {
        mid = (low+high)/2;
        int ans = banai(mid);
        if(ans == vc.size())
        {
            flag = 0;
            while(1)
            {
                mid--;
                int x = banai(mid);
                if(x < vc.size())
                {
                    mid++;
                    break;
                }
            }
        }
        if(ans < vc.size())
        {
            low = mid+1;
        }
    }
    return mid;
}


int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        vc.clear();
        int n;
        sf1(n);
        for(int i = 1; i <= n; i++)
        {
            int t1, t2;
            sf2(t1,t2);
            vc.pb(make_pair(t1,t2));
        }
        int ans = binary();

        pf("%d\n", ans);

    }

    return 0;
}



