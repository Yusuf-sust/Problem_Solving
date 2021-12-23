#include <bits/stdc++.h>
using namespace std;

int a[100000], tree[300000];

void seg(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = a[b];
        return;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    seg(left,b,mid);
    seg(right,mid+1,e);
    tree[node] = tree[left] + tree[right];
}

int res(int node, int b, int e, int x, int y)
{
    if(x > e || y < b)
    {
        return 0;
    }
    if(b >= x && e <= y)
    {
        return tree[node];
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    int n1 = res(left,b,mid, x, y);
    int n2 = res(right,mid+1,e, x, y);
    return n1+n2;
}
/*int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2; //বাম এবং ডান পাশের যোগফল
}*/

void update(int node, int b, int e, int x, int y)
{
    if(x > e || x < b)
    {
        return;
    }
    if(b >= x && e <= x)
    {
        tree[node] = y;
        return;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    update(left,b,mid, x, y);
    update(right,mid+1,e, x, y);
    tree[node] = tree[left] + tree[right];
}

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &a[i]);
    }
    seg(1,1,n);
    for(i = 1; i <= 3 * n; i++)
    {
        printf("%d ", tree[i]);
    }
    int m;
    scanf("%d", &m);
    for(j = 0; j < m; j++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int r = res(1,1,n,x,y);
        printf("%d\n", r);
    }
    update(1,1,n,5,1);
    for(j = 0; j < m; j++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int r = res(1,1,n,x,y);
        printf("%d\n", r);
    }

    return 0;

}
