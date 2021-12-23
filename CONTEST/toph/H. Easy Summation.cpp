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

typedef pair<ll, ll> pii;
#define x first
#define y second

pii extendedEuclid(ll a, ll b) { // returns x, y | ax + by = gcd(a,b)
  if(b == 0) return pii(1, 0);
  else {
    pii d = extendedEuclid(b, a % b);
    return pii(d.y, d.x - d.y * (a / b));
  }
}
int modularInverse(ll a, ll n) {
  pii ret = extendedEuclid(a, n);
  return ((ret.x % n) + n) % n;
}

int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        ll r, a, b, m;
        sfl4(r,a,b,m);
        ll x = r/a;
        ll x1 = x;
        ll sum1 = (((2*a)%m+((x-1)%m*a%m)%m)*x%m)%m;
        ll f = modularInverse(2,m);
        sum1 = (f%m*sum1%m)%m;
        //cout<<f<<endl;
        //cout<<sum1<<endl;
        x = r/b;
        ll x2 = x;
        ll sum2 = (((2*b)%m+((x-1)%m*b%m)%m)*x%m)%m;
        sum2 = (f%m*sum2%m)%m;
        //cout<<sum2<<endl;
        ll y = __gcd(a,b);
        a /= y;
        int a1 = 0;
        ll g = a;
        while(g > 0)
        {
            g /= 10;
            a1++;
        }
        b /= y;
        g = b;
        ll b1 = 0;
        while(g > 0)
        {
            g /= 10;
            b1++;
        }
        a *= b;
        a *= y;
        x = r/a;
        ll x3 = x;
        //cout<<x<<endl;
        ll sum3 = (((2*a)%m+((x-1)%m*a%m)%m)*x%m)%m;
        sum3 = (f%m*sum1%m)%m;
        //cout<<sum3<<endl;
        if(x1 == 0)sum1 = 0;
        if(x2 == 0)sum2 = 0;
        if(x3 == 0)sum3 = 0;
        ll sum = ((sum1%m+sum2%m)-sum3%m)%m;
        pf("%lld\n", sum);

    }

    return 0;
}


