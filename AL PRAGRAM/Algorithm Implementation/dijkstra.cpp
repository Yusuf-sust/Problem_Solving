#include <bits/stdc++.h>
using namespace std;

#define mx 500000

int d[mx];

struct node
{
    int v, w;
    bool operator <(const node&p)const
    {
        return w >= p.w;
    }
};

void dijkstra(int s, vector <int> *vc, vector<int> *vd)
{
    d[s] = 0;
    node m;
    priority_queue<node> q;
    m.v = s;
    m.w = 0;
    q.push(m);
    while(!q.empty())
    {
        node p;
        p = q.top();
        q.pop();
        int u = p.v;
        for(int i = 0; i < vc[u].size(); i++)
        {
            int v = vc[u][i];
            if(d[v] > (d[u] + vd[u][i]))
            {
                d[v] = d[u] + vd[u][i];
                m.v = v;
                m.w = d[v];
                q.push(m);
            }
        }
    }
}

int main()
{
    int i, j, n, e, u, v, w;
    vector <int> vc[1000], vd[1000];
    memset(d, mx, sizeof(d));
    scanf("%d %d", &n, &e);
    for(i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        vc[u].push_back(v);
        vc[v].push_back(u);
        vd[v].push_back(w);
        vd[u].push_back(w);
    }
    int start;
    scanf("%d", &start);
    dijkstra(start, vc, vd);

    for(i = 1; i <= n; i++)
    {
        printf("From %d to %d is %d\n", start, i, d[i]);
    }

    return 0;
}
