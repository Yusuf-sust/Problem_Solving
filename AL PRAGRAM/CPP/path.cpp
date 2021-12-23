#include <bits/stdc++.h>
using namespace std;

int vist[100], dist[100], parent[100];

void bfs(int a, vector <int> *v)
{
    vist[a] = 1;
    dist[a] = 0;
    parent[a] = 0;
    queue <int> q;
    q.push(a);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < v[u].size(); i++)
        {
            int w = v[u][i];
            if(vist[w] == 0)
            {
                vist[w] = 1;
                dist[w] += dist[u] + 1;
                parent[w] = u;
                q.push(w);
            }
        }
    }
}

int main()
{
    int i, j, n, e, x, y, a;
    vector <int> v[100];
    cin>>n>>e;
    for(i = 0; i < e; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    a = 1;
    bfs(a,v);
    for(i = 1; i <= n; i++)
    {
        cout<<i<<" dis: "<<dist[i]<<" par : "<<parent[i]<<" path : ";
        j = i;
        while(1)
        {
            if(parent[j] == 0)
                break;
            else cout<<parent[j]<<" ";
            j = parent[j];
        }
        cout<<endl;
    }

    return 0;
}
