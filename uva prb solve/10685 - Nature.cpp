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

int parent[10000];

int find1(int r)
{
    if(parent[r] == r) return r;
    return parent[r] = find1(parent[r]);
}

void seting(int u, int v)
{
    int x, y;
    x = find1(u);
    y = find1(v);
    if(x != y)
    {
        parent[x] = y;
    }
}



int main()
{
    int n, m;
    while(sf("%d %d", &n, &m) == 2)
    {
        if(n==0 && m == 0)break;
        char s[100], s1[100];
        map <string,int> mp;
        for(int i = 1; i <= n; i++)
        {
            sf("%s", s);
            string st(s);
            mp[s] = i;
            parent[i] = i;
        }
        for(int i = 1; i <= m; i++)
        {
            sf("%s %s", s, s1);
            string st1(s), st2(s1);
            seting(mp[st1], mp[st2]);
        }
        int a[10000] = {0};
        for(int i = 1; i <= n; i++)
        {
            int x = find1(i);
            a[x]++;
        }
        int mx = -1;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] > mx)mx = a[i];
        }
        pf("%d\n", mx);
    }


    return 0;
}

