#include <bits/stdc++.h>
using namespace std;

#define pii pair <int,int>
#define uu first
#define vv second

int dx[] = {0,0,-1,1}, dy[] = {-1,1,0,0};

int cel[1010][1010], visit[1010][1010], dist[1010][1010];

void bfs(int sx, int sy, int n, int m)
{
    memset(visit, 0, sizeof(visit));
    memset(dist, 0, sizeof(dist));
    visit[sx][sy] = 1;
    dist[sx][sy] = 0;
    queue <pii> q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int tx = top.uu + dx[i];
            int ty = top.vv + dy[i];
            if(tx >= 0 && tx < n && ty >= 0 && ty < m && cel[tx][ty] != -1 && visit[tx][ty] != 1)
            {
                visit[tx][ty] = 1;
                dist[tx][ty] = dist[top.uu][top.vv] + 1;
                q.push(pii(tx,ty));
            }
        }
    }
}

int main()
{
    int i, j, n, m, a, b, c, d, x, y, e, f;
    while(scanf("%d %d", &n, &m) && n || m)
    {
        memset(cel, 0, sizeof(cel));
        scanf("%d", &x);
        for(i = 0; i < x; i++)
        {
            scanf("%d %d", &e, &f);
            for(j = 0; j < f; j++)
            {
                scanf("%d", &y);
                cel[e][y] = -1;
            }
        }
        scanf("%d %d", &a, &b);
        scanf("%d %d", &c, &d);
        bfs(a, b, n, m);
        printf("%d\n", dist[c][d]);
    }

    return 0;
}
