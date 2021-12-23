#include <bits/stdc++.h>
using namespace std;

#define pii pair <int,int>
#define uu first
#define vv second

int dx[] = {1,1,-1,-1,2,2,-2,-2}, dy[] = {-2,2,-2,2,-1,1,-1,1};

int visit[10][10], dist[10][10];

void bfs(int sx, int sy)
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
        for(int i = 0; i < 8; i++)
        {
            int tx = top.uu + dx[i];
            int ty = top.vv + dy[i];
            if(tx > 0 && tx <= 8 && ty > 0 && ty <= 8 && visit[tx][ty] != 1)
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
    char a[10], b[10];
    while(scanf("%s %s", a, b) == 2)
    {
        x = (int)a[0] - 96;
        y = (int)a[1] - 48;
        i = (int)b[0] - 96;
        j = (int)b[1] - 48;
        bfs(x,y);
        printf("To get from %s to %s takes %d knight moves.\n", a, b, dist[i][j]);
    }

    return 0;
}
