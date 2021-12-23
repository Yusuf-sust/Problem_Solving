#include <bits/stdc++.h>
using namespace std;

int dist[100], visit[100], sum;

void bfs(int a, vector <int> *v)
{
    visit[a] = 1;
    dist[a] = 0;
    queue <int> q;
    q.push(a);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < v[u].size(); i++)
        {
            int w = v[u][i];
            if(!visit[w])
            {
                visit[w] = 1;
                dist[w] += dist[u] + 1;
                sum += dist[w];
                q.push(w);
            }
        }
    }
}

int main()
{
    int i, j, t, n, e, x, y;
    double avg;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        sum = 0;
        vector <int> v[101];
        set <int> s;
        scanf("%d %d", &n, &e);
        for(j = 0; j < e; j++)
        {
            scanf("%d %d", &x, &y);
            v[x].push_back(y);
            s.insert(x);
        }
        set <int> :: iterator f;
        for(f = s.begin(); f != s.end(); f++)
        {
            bfs(*f,v);
            printf("%d\n", sum);
            memset(dist, 0, sizeof(dist));
            memset(visit, 0, sizeof(visit));
        }
        printf("%d/n", sum);
        avg = (double)sum / (double)(n * (n-1));
        printf("Case %d: %lf\n", i, avg);
    }

    return 0;
}
