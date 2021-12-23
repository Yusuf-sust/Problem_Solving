#include <bits/stdc++.h>
using namespace std;

#define mx 110

long long int dist[mx];
vector <int> vcn[mx], vcw[mx];

struct node
{
    int v, w;
    bool operator < (const node&p)const
    {
        return w >= p.w;
    }
};

void dijskstra(int s)
{
    node m;
    dist[s] = 0;
    priority_queue<node> q;
    m.v = s;
    m.w = 0;
    q.push(m);
    while(!q.empty())
    {
        m = q.top();
        q.pop();
        int u = m.v;
        for(int i = 0; i < vcn[u].size(); i++)
        {
            int v = vcn[u][i];
            if(dist[v] > (dist[u] + vcw[u][i]))
            {
                dist[v] = dist[u] + vcw[u][i];
                m.v = v;
                m.w = dist[v];
                q.push(m);
            }
        }
    }
}

int main()
{
    int i, j, ts, n, m, t, e;
    scanf("%d", &ts);
    for(i = 1; i <= ts; i++)
    {
        if(i != 1)printf("\n");
        scanf("%d %d %d %d", &n, &e, &t, &m);
        for(j = 1; j <= m; j++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            vcn[a].push_back(b);
            vcw[a].push_back(c);
        }
        long long int a[mx];
        for(j = 1; j <= n; j++)
        {
            if(j == e)
            {
                a[j] = 0;
                continue;
            }
            for(int k = 0; k <= n; k++) dist[k] = 1000000000000000;
            dijskstra(j);
            a[j] = dist[e];
        }
        int cnt = 0;
        for(j = 1; j <= n; j++)
        {
            if(a[j] <= t)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
        for(j = 0; j <= mx; j++)
        {
            vcn[j].clear();
            vcw[j].clear();
        }
    }

    return 0;
}

