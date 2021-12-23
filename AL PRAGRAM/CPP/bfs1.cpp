#include <bits/stdc++.h>
using namespace std;

int visit[100], dist[100], parent[100];

void BFS(int start, vector <int> *a);

int main()
{
    int n, e, start;
    cin>>n>>e>>start;
    vector <int> a[e + 10];
    for(int i = 0; i < e; ++i)
    {
        int f, t;
        cin>>f>>t;
        a[f].push_back(t);
        a[t].push_back(f);
    }
    BFS(start,a);

    for(int i = 1; i <= n; ++i)
    {
        cout<<i<<"-->"<<dist[i]<<endl;
    }

    return 0;
}

void BFS(int start, vector <int> *a)
{
    visit[start] = 1;
    dist[start] = 0;
    queue <int> p;
    p.push(start);
    while(!p.empty())
    {
        int u = p.front();
        p.pop();
        for(int i = 0; i < a[u].size(); i++)
        {
            int v = a[u][i];
            if(visit[v] == 0)
            {
                visit[v] = 1;
                dist[v] = dist[u] + 1;
                parent[v] = u;
                p.push(v);
            }
        }
    }
}
