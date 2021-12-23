#include <bits/stdc++.h>
using namespace std;

int dist[110], visit[110], sum;

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
    int t=1, n, x, y;
    double avg;
    while(scanf("%d %d", &x, &y) && (x || y))
    {
        sum = 0;
        vector <int> v[111];
        set <int> s;
        v[x].push_back(y);
        s.insert(x);
        s.insert(y);
        while(scanf("%d %d", &x, &y) && x || y)
        {
            v[x].push_back(y);
            s.insert(x);
            s.insert(y);
        }
        set <int> :: iterator f;
        for(f = s.begin(); f != s.end(); f++)
        {
            bfs(*f,v);
            memset(dist, 0, sizeof(dist));
            memset(visit, 0, sizeof(visit));
        }
        n = s.size();
        avg = (double)sum / (double)(n * (n-1));
        printf("Case %d: average length between pages = %.3lf clicks\n", t++, avg);
    }

    return 0;
}
