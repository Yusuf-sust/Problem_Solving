#include <bits/stdc++.h>
using namespace std;

#define pii pair <int,int>
#define uu first
#define vv second

int dx[] = {1,1,-1,-1,2,2,-2,-2}, dy[] = {-2,2,-2,2,-1,1,-1,1};

int cel[100][100], visit[100][100], dist[100][100];

void bfs(int sx, int sy, int n, int m)
{
    memset(visit, 0, sizeof(visit));
    visit[sx][sy] = 1;
    dist[sx][sy] = 0;
    queue <pii> q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top = q.front(); q.pop();
        for(int i = 0; i < 8; i++)
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
     int i, j, n, m, x, y;
     scanf("%d %d %d %d %d %d", &n, &m, &x, &y, &i, &j);
     bfs(x, y, n, m);
     printf("%d\n", dist[i][j]);

     return 0;
}
