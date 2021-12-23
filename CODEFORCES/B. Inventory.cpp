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
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define ve (vc.begin(),vc.end())
#define mod 1000000007
#define m0 memset(a,0,sizeof(a))
#define ms memset(a,-1,sizeof(a))
#define mc memset(s,'0',sizeof(s))
#define mv memset(visit, o, sizeof(visit))
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()



int main()
{
    int n, x, a[100010], b[100010];
    memset(b,0,sof(b));
    sf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sf("%d", &a[i]);
        b[a[i]] = 1;
    }
    queue <int> q;
    for(int i = 1; i <= n; i++)
    {
        if(b[i] == 0)
        {
            q.push(i);
        }
    }
    memset(b,0,sof(b));
    for(int i = 1; i <= n; i++)
    {
        if(b[a[i]] == 1 || a[i] > n)
        {
            a[i] = q.front();
            q.pop();
        }
        else
        {
            b[a[i]] = 1;
        }
    }
    for(int i = 1; i < n; i++)
        pf("%d ", a[i]);
    pf("%d\n", a[n]);

    return 0;
}

