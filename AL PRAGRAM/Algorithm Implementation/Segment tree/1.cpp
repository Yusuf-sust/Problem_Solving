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

#define mx 1000

int a[mx], tree[3*mx];

void make_tree(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = a[b];
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    make_tree(left,b,mid);
    make_tree(right,mid+1,e);
    tree[node] = tree[left]+tree[right];
}

int query(int node, int b, int e, int i, int j)
{
    if(i > e || j < b)
    {
        return 0;
    }
    if(b >= i && e <= j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int x1 = query(left,b,mid, i, j);
    int x2 = query(right,mid+1,e, i, j);
    return x1+x2;
}

void change(int node, int b, int e, int i, int n)
{
    if(i > e || i < b)
    {
        return;
    }
    if(b >= i && e <= i)
    {
        tree[node] = n;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    change(left,b,mid, i, n);
    change(right,mid+1,e, i, n);
    tree[node] = tree[left]+tree[right];
}


int main()
{
    int n, m, i, j;
    sf("%d", &n);
    m0;
    memset(tree, 0, sof(tree));
    for(i = 1; i <= n; i++)
    {
        sf("%d", &a[i]);
    }
    make_tree(1,1,n);
    sf("%d", &m);
    for(i = 1; i <= m; i++)
    {
        int a, b, c;
        sf("%d %d %d", &c, &a, &b);
        if(c==1)
        {
            int sum = query(1,1,n,a,b);
            pf("%d\n", sum);
        }
        else
            change(1,1,n,a,b);
    }


    return 0;
}

