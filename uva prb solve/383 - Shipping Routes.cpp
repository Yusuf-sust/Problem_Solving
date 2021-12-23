#include <bits/stdc++.h>
using namespace std;

#define mx 200

int visit[mx], dist[mx];

struct node
{
    int d, cnt;

    bool operator < (const node&p)const
    {
        return cnt > p.cnt;
    }
};

vector <int> vc[mx];
map<string, int> mp;

void BFS(int start)
{
    visit[start] = 1 ;
    dist[start] = 0;
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
                Q.push(v);
            }
        }
    }
}

int main()
{
    int t, i;
    scanf("%d", &t);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    for(i = 1; i <= t; i++)
    {
        printf("DATA SET  %d\n\n", i);
        int n, m, p;
        scanf("%d %d %d", &n, &m, &p);
        char s[10], s1[10];
        for(int j = 1; j <= n; j++)
        {
            scanf("%s", s);
            mp[s] = j;
        }
        for(int j = 1; j <= m; j++)
        {
            scanf("%s %s", s, s1);
            vc[mp[s]].push_back(mp[s1]);
            vc[mp[s1]].push_back(mp[s]);
        }
        for(int j = 1; j <= p; j++)
        {
            for(int k = 0; k <= n; k++)
            {
                visit[k] = dist[k] = 0;
            }
            int x;
            scanf("%d %s %s", &x, s, s1);
            BFS(mp[s]);
            if(dist[mp[s1]] == 0) printf("NO SHIPMENT POSSIBLE\n");
            else printf("$%d\n", dist[mp[s1]]*x*100);
        }
        for(int j = 0; j <= mx; j++) vc[j].clear();
        mp.clear();
        printf("\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}


