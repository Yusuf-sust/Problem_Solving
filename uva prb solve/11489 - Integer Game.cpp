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

map<int,int> mp;

int kheli(int n)
{
    if(n==0)return 0;
    int x = n%3;
    if(x == 0)
    {
        int flag = 0, f = 1;

        if(mp[3])
        {
            flag = 1;
            mp[3]--;
            if(kheli(n-3) == 0)
                return 1;
        }
        if(mp[6])
        {
            if(flag)mp[3]++;
            flag = 0;
            f = 1;
            mp[6]--;
            if(kheli(n-6) == 0)
                return 1;
        }
        if(mp[9])
        {
            if(flag)mp[3]++;
            if(f)mp[6]++;
            mp[9]--;
            if(kheli(n-9) == 0)
                return 1;
        }
        return 0;
    }
    if(x == 1)
    {
        int flag = 0, f = 0;
        if(mp[1])
        {
            flag = 1;
            mp[1]--;
            if(kheli(n-1) == 0)
                return 1;
        }
        if(mp[4])
        {
            if(flag)mp[1]++;
            flag = 0;
            f = 1;
            mp[4]--;
            if(kheli(n-4) == 0)
                return 1;
        }
        if(mp[7])
        {
            if(flag)mp[1]++;
            if(f)mp[4]++;
            mp[7]--;
            if(kheli(n-7) == 0)
                return 1;
        }
        return 0;
    }
    if(x == 2)
    {
        int flag = 0;
        if(mp[2])
        {
            flag = 1;
            mp[2]--;
            if(kheli(n-2) == 0)
                return 1;
        }
        int f = 0;
        if(mp[5])
        {
            if(flag)mp[2]++;
            mp[5]--;
            flag = 0;
            f = 1;
            if(kheli(n-5) == 0)
                return 1;
        }
        if(mp[8])
        {
            if(flag)mp[2]++;
            if(f)mp[5]++;
            mp[8]--;
            if(kheli(n-8) == 0)
                return 1;
        }
        return 0;
    }
    return 0;
}


int main()
{

    int t;
    sf1(t);
    getchar();
    while(t--)
    {
        mp.clear();
        char s[1005];
        gets(s);
        int sum = 0;
        int cnt = 0;
        for(int i = 0; s[i] != '\0'; i++)
        {
            cnt++;
            int x = (int)s[i];
            mp[x]++;
            sum += x;
        }
        if(cnt == 1)
        {
            pf("Case %d: S\n", cas++);
            continue;
        }
        int x = kheli(sum);
        if(x)pf("Case %d: S\n", cas++);
        else pf("Case %d: T\n", cas++);
    }

    return 0;
}



