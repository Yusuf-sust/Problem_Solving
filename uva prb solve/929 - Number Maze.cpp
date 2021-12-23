#include <bits/stdc++.h>
using namespace std;

#define mx 1000000

int dist[mx];

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
    dist[s] = vcw[s][0];
    node m;
    m.v = s;
    m.w = dist[s];
    priority_queue <node> q;
    q.push(m);
    while(!q.empty())
    {
        m = q.top();
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
    int i, j, t, n, m;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        vector <int> vcn[mx], vcw[mx];
        memset(a, -1, sizeof(a));
      for(i=1;i<=n;i++)dist[i]=2147483647;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int f = 1;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
            {
                int w, x, y, z;
                w = a[i-1][j];
                if(w >= 0)
                {
                    vcn[f].push_back(f-m);
                    vcw[f].push_back(w);
                }
                x = a[i][j-1];
                if(x >= 0)
                {
                    vcn[f].push_back(f-1);
                    vcw[f].push_back(x);
                }
                y = a[i][j+1];
                if(y >= 0)
                {
                    vcn[f].push_back(f+1);
                    vcw[f].push_back(y);
                }
                z = a[i+1][j];
                if(z >= 0)
                {
                    vcn[f].push_back(f+m);
                    vcw[f].push_back(z);
                }
                f++;
            }
        }
      //  dijskstra(1, vcn, vcw);
        printf("%d\n", dist[f-1]);
    }

    return 0;
}
