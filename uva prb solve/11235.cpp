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
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
typedef pair<int, int> pii;

#define SIZ 100005

int ind;
int test, cas = 1;
int arr[SIZ];
pii range[SIZ];
int tree[SIZ << 2];

void build(int nod, int b, int e)
{
    if(b == e)
    {
        tree[nod] = range[b].second - range[b].first + 1;
        return;
    }

    int m = (b + e) >> 1;
    int l = nod << 1;
    int r = l + 1;

    build(l, b, m);
    build(r, 1 + m, e);

    tree[nod] = max(tree[l], tree[r]);
}

int query(int nod, int b, int e, int i, int j)
{
    if(i <= b && e <= j)
    {
        return tree[nod];
    }

    int m = (b + e) >> 1;
    int l = nod << 1;
    int r = l + 1;

    int res = 0;
    if(i <= m) res = max(res, query(l, b, m, i, j));
    if(j > m) res = max(res, query(r, 1 + m, e, i, j));

    return res;
}

int getmax(int x, int y)
{
    if(x > y) swap(x, y);

    int i = arr[x];
    int j = arr[y];
    if(i == j) return y - x + 1;

    int left = range[i].second - x + 1;
    int right = y - range[j].first + 1;
    if(i + 1 == j) return max(left, right);

    int mid = query(1, 1, ind, i + 1, j - 1);
    return max(left, max(right, mid));
}

int main()
{

    int n, q, x, y;
    while(sf("%d", &n) == 1 && n)
    {
        sf("%d", &q);

        ind = 0;
        int cur, pb, pe;
        for(int i = 1; i <= n; i++)
        {
            sf("%d", &x);
            if(i == 1 || cur != x)
            {
                cur = x;
                ++ind;
                range[ind].first = i;
            }
            range[ind].second = i;
            arr[i] = ind;
        }

        build(1, 1, ind);

        while(q--)
        {
            sf("%d %d", &x, &y);
            int res = getmax(x, y);
            pf("%d\n", res);
        }
    }

    return 0;
}
