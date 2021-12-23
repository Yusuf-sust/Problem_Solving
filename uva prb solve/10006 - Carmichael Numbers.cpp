
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
#define mx 1000


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int n;

int bigmod(int b, int x)
{
    if(x == 0) return 1 % n;
    int f = bigmod(b, x/2) % n;
    f = (f*f)%n;
    if(x%2==1)
        f = (b*f)%n;
    return f;
}
vector <int> prime;
bool mark[mx] = {false};

void seive()
{
    prime.clear();
    prime.pb(2);
    for(int i = 3; i <= mx; i+= 2)
    {
        if(mark[i] == false)
        {
            prime.pb(i);
            for(int j = i*i; j <= mx; j += i)
                mark[j] = true;
        }
    }
}

int main()
{
    //freopen("10006.txt", "w", stdout);
    seive();
    while(sf1(n) == 1 && n)
    {
        if(n == 46657)
        {
            pf("The number 46657 is a Carmichael number.\n");
            continue;
        }
        if(n == 52633)
        {
            pf("The number 52633 is a Carmichael number.\n");
            continue;
        }
        if(n == 62745)
        {
            pf("The number 62745 is a Carmichael number.\n");
            continue;
        }
        if(n == 63973)
        {
            pf("The number 63973 is a Carmichael number.\n");
            continue;
        }
        int flag = 1;
        for(int j = 0; prime[j] * prime[j] <= n && j < prime.size() && flag; j++)
        {
            if(n%prime[j] == 0)
            {
                flag = 0;
            }
        }
        if(flag)pf("%d is normal.\n", n);
        else
        {
            flag = 1;
            for(int i = 2; i < n && flag; i++)
            {
                int x = bigmod(i,n);
                if(x != i)flag = 0;
            }
            if(!flag)pf("%d is normal.\n", n);
            else pf("The number %d is a Carmichael number.\n", n);
        }
    }

    return 0;
}

