#include <bits/stdc++.h>
using namespace std;

#define mx 500000

struct node
{
    int v, w;
    bool operator <(const node&p)const
    {
        return w >= p.w;
    }
};

int parent[mx];
long long int d[mx];

void dijkstra(int s, vector <int> *vc, vector<int> *vd)
{
    d[s] = 0;
    node m;
    parent[s] = s;
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
                parent[v] = u;
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
    scanf("%d %d", &n, &e);
    for(i = 1; i <= n; i++)
    {
        d[i] = 1000000000000000;
        parent[i] = i;
    }
    vector <int> vc[n+10], vd[n+10];
    for(i = 1; i <= n; i++) parent[i] = i;
    for(i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        vc[u].push_back(v);
        vc[v].push_back(u);
        vd[v].push_back(w);
        vd[u].push_back(w);
    }
    int start = 1;
    dijkstra(start, vc, vd);
    vector <int> p;
    int x = n;
    while(parent[n] != n)
    {
        p.push_back(n);
        n = parent[n];
    }
    p.push_back(n);
    if(parent[x] == x && x != 1)
        printf("-1\n");
    else
    {
        for(i = p.size()-1; i > 0; i--)
            cout<<p[i]<<" ";
        cout<<p[0]<<endl;
    }

    return 0;
}
