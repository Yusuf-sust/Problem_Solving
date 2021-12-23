#include <bits/stdc++.h>
using namespace std;

int visit[100], dist[100], parent[100];
void BFS(int start, vector<int> *g)
{
    visit[start] = 1 ;
    dist[start] = 0;
    queue<int> Q;
    Q.push(start);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < g[u].size(); ++i)
        {
            int v = g[u][i];
            if(visit[v] == 0)
            {
                visit[v] = 1;
                dist[v] = dist[u] + 1;
                parent[v] = u;
                Q.push(v);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> g[e + 10];
    for(int i = 0; i < e; ++i)
    {
        int f, t;
        cin >> f >> t;
        g[f].push_back(t);
        g[t].push_back(f);
    }
    int start;
    cin >> start;
    BFS(start, g);

    for(int i = 1; i <= n; ++i)
        cout << i << " --> " << dist[i] << endl;

    return 0;
}
