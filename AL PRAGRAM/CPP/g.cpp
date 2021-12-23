#include <bits/stdc++.h>
using namespace std;

int visit[100], dist[100];

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
                q.push(w);
                visit[w] = 1;
                dist[w] += dist[u] + 1;
            }
        }
    }
}

int main()
{
    int i, j, n, e, x, y;
    vector <int> v[100];
    cin>>n>>e;
    for(i = 0; i < e; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int a;
    cin>>a;
    bfs(a,v);
    for(i = 1; i <= n; i++)
    {
        cout<<"Distance from "<<a<<" to "<<i<<" is "<<dist[i]<<endl;
    }

    return 0;
}
