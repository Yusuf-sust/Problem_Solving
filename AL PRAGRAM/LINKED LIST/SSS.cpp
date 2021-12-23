#include <bits/stdc++.h>
using namespace std;

char s[20][20];

int dx[] = {0,-1,0,1,0}, dy[] = {0,0,1,0,-1}, cnt = 0, w, h;
int dirr[20][20], use[20][20];

void dfs(int x, int y, int dir)
{
    if(use[x][y] == 0)
    {
        cnt++;
        dirr[x][y] = dir;
    }
    use[x][y] = 1;
    int nx, ny, dir1;
    for(int i = 0; i < 4; i++)
    {
        dir1 = (dir + i) % 4;
        if(dir1 == 0) dir1 = 4;
        nx = x + dx[dir1], ny = y + dy[dir1];
        if(nx >= 0 && nx < w && ny >= 0 && ny < h && s[nx][ny] == '.')
        {
            if(dirr[nx][ny] == dir1) break;
            dfs(nx, ny, dir1);
            break;
        }
    }
}

int main()
{
    int i, j, x, y, dir;
    memset(use, 0, sizeof(use));
    scanf("%d %d ", &w, &h);
    for(i = 0; i < w; i++)
    {
        for(j = 0; j < h; j++)
        {
            scanf("%c", &s[i][j]);
            if(s[i][j] == 'D' || s[i][j] == 'U' || s[i][j] == 'R' || s[i][j] == 'L')
            {
                x = i, y = j;
                if(s[i][j] == 'U')
                    dir = 1;
                else if (s[i][j] == 'R')
                    dir = 2;
                else if (s[i][j] == 'D')
                    dir = 3;
                else if (s[i][j] == 'L')
                    dir = 4;
                s[i][j] = '.';
            }
        }

        getchar();
    }
    dfs(x,y,dir);
    printf("%d\n", cnt);

    return 0;
}
