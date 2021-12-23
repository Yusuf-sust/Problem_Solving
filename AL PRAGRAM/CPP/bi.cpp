#include <bits/stdc++.h>
using namespace std;

int visit[100], dist[100];

int bip(int a, vector <int> *v)
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
            if(visit[w] == 1)
            {
                if(dist[w] == dist[u]){
                    return 0;
                }
            }
            else{
                visit[w] = 1;
                q.push(w);
                dist[w] += dist[u] + 1;
            }
        }
    }
    return 2;
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
    cin>>a;
    int f = bip(a,v);
    if(f)
        cout<<"Bicolour"<<endl;
    else cout<<"Not Biclour"<<endl;

    return 0;
}
