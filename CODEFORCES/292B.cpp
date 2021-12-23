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

int  a[100010] = {0};

int main()
{
    int n, m,  x, y;
    sf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++)
    {
        sf("%d %d", &x, &y);
        a[x]++;
        a[y]++;
    }
    int zero = 0, one = 0, mul = 0, other = 0, two = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0)
            zero++;
        else if(a[i] == 1)
            one++;
        else if(a[i] == 2)
            two++;
        else if(a[i] == n-1)
            mul++;
        else other++;
    }
    if(one == 2 && two == n-2)
        pf("bus topology\n");
    else if(two == n)
        pf("ring topology\n");
    else if(mul == 1 && one == n-1)
        pf("star topology\n");
    else pf("unknown topology\n");

    return 0;
}


