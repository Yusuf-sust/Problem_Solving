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

char s[150];

int main()
{
    int t;
    sf1(t);
    getchar();
    while(t--)
    {
        stack<char>stk;
        gets(s);
        int l = strlen(s);
        if(l == 0)
        {
            pf("Yes\n");
            continue;
        }
        int flag = 1;
        for(int i = 0; s[i] != '\0'&&flag; i++)
        {
            if(s[i] == '(' || s[i] == '[')
                stk.push(s[i]);
            else
            {
                if(!stk.empty())
                {
                    if(s[i] == ']' && stk.top() == '[')
                        stk.pop();
                    else if(s[i] == ')' && stk.top() == '(')
                        stk.pop();
                    else
                        flag = 0;
                }
                else flag = 0;
            }
        }
        if(!stk.empty())flag = 0;
        if(flag)pf("Yes\n");
        else pf("No\n");
    }

    return 0;
}


