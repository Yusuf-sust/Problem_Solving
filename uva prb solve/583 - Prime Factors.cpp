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
#include <bits/stdc++.h>
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
#define mx  46341


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

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
    seive();
    long long int n;
    int flag;
    while(scanf("%lld", &n) == 1)
    {
        flag = 1;
        if(n == 0)
            break;
        if(n == 1)
        {
            pf("1 =\n");
            continue;
        }
        if(n == -1)
        {
            pf("-1 = -1 x\n");
            continue;
        }
        if(n < 0)
            pf("%lld = -1 x", n);
        else pf("%lld =", n);
        if(n < 0)
        {
            n = -1*n;
        }
        long long int x = n;
        for(int j = 0; prime[j] <= x&& j < prime.size(); j++)
        {
            while(x%prime[j] == 0 && x != 0)
            {
                if(flag)pf(" %d", prime[j]);
                else
                {
                    pf(" x %d", prime[j]);
                }
                flag = 0;
                x/= prime[j];
            }
        }
        if(x == n)
        {
            pf(" %d\n", x);
        }
        else pf("\n");

    }
    return 0;
}


