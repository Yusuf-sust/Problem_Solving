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
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
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

bool visit[510][510];

int main()
{
    int w, h, n;
    while(sf3(w,h,n) == 3)
    {
        memset(visit,false, sof visit);
        if(w == 0 && h == 0 && n == 0)
            break;
        int cnt = w*h;
        for(int i = 1; i <= n; i++)
        {
            int x1, x2, y1, y2;
            sf4(x1,y1, x2, y2);
            int x = min(x1,x2);
            int y = min(y1,y2);
            int xx = max(x1,x2);
            int yy = max(y1,y2);
            for(int j = x; j <= xx; j++)
            {
                for(int k = y; k <= yy; k++)
                    if(visit[j][k] == false)
                    {
                        visit[j][k] = true;
                        cnt--;
                    }

            }
        }
        if(!cnt)pf("There is no empty spots.\n");
        else if(cnt == 1)pf("There is one empty spot.\n");
        else pf("There are %d empty spots.\n", cnt);
    }


    return 0;
}



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
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
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

bool visit[510][510];

int main()
{
    int w, h, n;
    while(sf3(w,h,n) == 3)
    {
        memset(visit,false, sof visit);
        if(w == 0 && h == 0 && n == 0)
            break;
        int cnt = w*h;
        for(int i = 1; i <= n; i++)
        {
            int x1, x2, y1, y2;
            sf4(x1,y1, x2, y2);
            int x = min(x1,x2);
            int y = min(y1,y2);
            int xx = max(x1,x2);
            int yy = max(y1,y2);
            for(int j = x; j <= xx; j++)
            {
                for(int k = y; k <= yy; k++)
                    if(visit[j][k] == false)
                    {
                        visit[j][k] = true;
                        cnt--;
                    }

            }
        }
        if(!cnt)pf("There is no empty spots.\n");
        else if(cnt == 1)pf("There is one empty spot.\n");
        else pf("There are %d empty spots.\n", cnt);
    }


    return 0;
}



