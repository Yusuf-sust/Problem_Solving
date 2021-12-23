#include <bits/stdc++.h>
using namespace std;

#define mx 20010

long long int dist[mx];

struct node
{
    int v, w;
    bool operator < (const node&p)const
    {
        return w >= p.w;
    }
};

void dijskstra(int s, vector <int> *vcn, vector <int> *vcw)
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
    int i, j, t, n, m, s, e;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        vector <int> vcn[mx], vcw[mx];
        scanf("%d %d %d %d", &n, &m, &s, &e);
        for(j = 0; j <= n; j++) dist[j] = 1000000000000000;
        for(j = 1; j <= m; j++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            vcn[a].push_back(b);
            vcn[b].push_back(a);
            vcw[a].push_back(c);
            vcw[b].push_back(c);
        }
        dijskstra(s, vcn, vcw);
        if(dist[e] != 1000000000000000) printf("Case #%d: %d\n", i, dist[e]);
        else
        {
            printf("Case #%d: unreachable\n", i);
        }
    }

    return 0;
}
