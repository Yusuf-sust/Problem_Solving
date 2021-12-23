#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int u, v, w;
    bool operator < (const edge&p)const
    {
        return w < p.w;
    }
};

vector <edge> e;

int pr[1000];

int fin(int r)
{
    return (pr[r] == r) ? r : fin(pr[r]);
}

int kruskal(int n)
{
    sort(e.begin(), e.end());
    int i, u, v;
    for(i = 1; i <= n; i++) pr[i] = i;
    int sum = 0, cnt = 0, len = e.size();
    for(i = 0; i < len; i++)
    {
        u = fin(e[i].u);
        v = fin(e[i].v);
        if(u != v)
        {
            pr[u] = v;
            cnt++;
            sum+= e[i].w;
            if(cnt == n - 1) break;
        }
    }

    return sum;
}

int main()
{
    int i, n, m;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= m; i++)
    {
        int u, v, w;
        struct edge x;
        scanf("%d %d %d", &u, &v, &w);
        x.u = u;
        x.v = v;
        x.w = w;
        e.push_back(x);
    }

    cout<<kruskal(n)<<endl;

    return 0;
}
