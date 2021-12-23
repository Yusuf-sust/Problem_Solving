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

#define mx 200005

int a[mx], tree[4*mx];
int cas = 1;

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
    int n;
    int f = 1;
    while(sf("%d", &n) == 1 && n)
    {
        if(f != 1)pf("\n");
        f++;
        int m, i, j;
        memset(tree, 0, sof(tree));
        for(i = 1; i <= n; i++)
        {
            sf("%d", &a[i]);
        }
        make_tree(1,1,n);
        getchar();
        pf("Case %d:\n", cas++);
        while(1)
        {
            char c1, c2, c3;
            sf("%c", &c1);
            if(c1 == 'E')
            {
                sf("%c%c", &c2, &c3);
                break;
            }
            else if(c1 == 'M')
            {
                int a, b, c;
                sf("%d %d", &a, &b);
                int sum = query(1,1,n,a,b);
                pf("%d\n", sum);
            }
            else
            {
                int a, b, c;
                sf("%d %d", &a, &b);
                change(1,1,n,a,b);
            }
            getchar();
        }
    }


    return 0;
}


