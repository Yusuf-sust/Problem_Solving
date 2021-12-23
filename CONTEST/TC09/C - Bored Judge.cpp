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

int a[100005], id[100005], point[100005], b[100005];

struct compare
{
    bool operator() (const int a1, const int b1) const
    {
        if(b[a1]==b[b1]) return a1<b1;
        return b[a1]>b[b1];

    }
}

set <int,compare> st;

int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        st.clear();
        mem(a,0);
        mem(b,0);
        mem(a,0);
        int n, q;
        sf2(n,q);
        for(int i=1; i<=q; i++)
        {
            scanf("%d%d",&id[i],&point[i]);
            a[x[i]] += p[i];
        }
        int Max = -1000000009, tmp = -1;
        for(int i=1; i<=n; i++)
        {
            if(a[i] > Max)
            {
                Max = a[i];
                tmp = i;
            }
        }
        for(int i=1;i<=n;i++)
            st.insert(i);
        int pos = 0;
        if(*st.begin()!=tmp) pos=1;
        for(int i=1; i<=q; i++)
        {
            st.erase(id[i]);
            at[id[i]] += point[i];
            st.insert(id[i]);
            if(*st.begin()!=tmp) pos=i+1;
        }
        printf("%d\n",pos);
    }

    return 0;
}



