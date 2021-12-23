#include <bits/stdc++.h>
using namespace std;

#define mx 2510

int visit[mx], dist[mx], level[mx];

struct node
{
    int d, cnt;

    bool operator < (const node&p)const
    {
        return cnt > p.cnt;
    }
};

vector <int> vc[mx];
vector <node> vn;

void BFS(int start)
{
    visit[start] = 1 ;
    dist[start] = 0;
    level[dist[start]]++;
    queue<int> Q;
    Q.push(start);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < vc[u].size(); ++i)
        {
            int v = vc[u][i];
            if(visit[v] == 0)
            {
                visit[v] = 1;
                dist[v] = dist[u] + 1;
                level[dist[v]]++;
                Q.push(v);
            }
        }
    }
}

int main()
{
    int n, e;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &e);
        for(int j = 0; j < e; j++)
        {
            int x;
            scanf("%d", &x);
            vc[i].push_back(x);
        }
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        for(int i = 0; i <= n; i++)
        {
            visit[i] = 0, dist[i] = 0, level[i] = 0;
        }
        int s;
        scanf("%d", &s);
        if(vc[s].size() == 0)
        {
            printf("0\n");
        }
        else
        {
            BFS(s);
            for(int i = 1; i <= n; i++)
            {
                node f;
                f.d = i;
                f.cnt = level[i];
                vn.push_back(f);
            }
            sort(vn.begin(), vn.end());
            printf("%d %d\n", vn[0].cnt, vn[0].d);
        }
        vn.clear();
    }

    return 0;
}

