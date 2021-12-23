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

int parent[1000], r;

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
        r--;
    }
}

int main()
{
    int t;
    char ch;
    sf("%d", &t);
    while(t--)
    {
        cin>>ch;
        r = (int)(ch - 'A');
        r++;
        for(int i = 1; i <= r; i++)
        {
            parent[i] = i;
        }
        getchar();
        string st;
        while(true)
        {
            getline(cin,st);
            if(st== "")break;
            int u = (int)st[0]-64;
            int v = (int)st[1]-64;
            if(u > v) swap(u,v);
            seting(u,v);
        }
        pf("%d\n", r);
        if(t)pf("\n");
    }

    return 0;
}

