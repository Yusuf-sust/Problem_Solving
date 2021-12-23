#include <bits/stdc++.h>
using namespace std;

int visit[1000], dist[1000];

int bip(vector <int> *v)
{
    visit[0] = 1;
    dist[0] = 0;
    queue <int> q;
    q.push(0);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < v[u].size(); i++)
        {
            int w = v[u][i];
            if(visit[w] == 1)
            {
                if(dist[w] == dist[u])
                {
                    return 0;
                }
            }
            else
            {
                visit[w] = 1;
                q.push(w);
                dist[w] += dist[u] + 1;
            }
        }
    }
    return 1;
}

int main()
{
    int i, n, e, x, y;
    while(scanf("%d", &n) == 1)
    {
        vector <int> v[1000];
        if(n == 0)
            break;
        memset(visit, 0, sizeof(visit));
        memset(dist, 0, sizeof(dist));
        scanf("%d", &e);
        for(i = 0; i < e; i++)
        {
            scanf("%d %d", &x, &y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int f = bip(v);
        if(f)
            printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
    }

    return 0;
}

