#include <bits/stdc++.h>
using namespace std;

#define mx 1000000
int a[mx];

struct sg
{
    int sum, prop;
} tree[3*mx];
void seg(int node, int b, int e)
{
    if(b == e)
    {
        tree[node].sum = a[b];
        return;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    seg(left,b,mid);
    seg(right,mid+1,e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

int res(int node, int b, int e, int x, int y, int carry = 0)
{
    if(x > e || y < b)
    {
        return 0;
    }
    if(b >= x && e <= y)
    {
        return tree[node].sum  + (e-b+1)*carry;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    int n1 = res(left,b,mid, x, y,carry+tree[node].prop);
    int n2 = res(right,mid+1,e, x, y, carry+tree[node].prop);
    return n1+n2;
}

void update(int node, int b, int e, int i, int j, int x)
{
    if(i > e || j < b)
    {
        return;
    }
    if(b >= i && e <= j)
    {
        tree[node].sum += ((e-b+1)*x);
        tree[node].prop += x;
        return;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    update(left,b,mid, i, j, x);
    update(right,mid+1,e, i, j, x);
    tree[node].sum = tree[left].sum + tree[right].sum + ((e-b+1)*tree[node].prop);
}

int main()
{
    int i, j, n, m;
    scanf("%d %d", &n, &m);
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &a[i]);
    }
    seg(1,1,n);
    for(i = 0; i < m; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int r = res(1,1,n,x,y);
        printf("%d\n", r);
    }
    update(1,1,n,1,2,2);
    for(i = 0; i < m; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int r = res(1,1,n,x,y);
        printf("%d\n", r);
    }
    return 0;

}
