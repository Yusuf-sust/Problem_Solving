#include<bits/stdc++.h>
using namespace std;
vector < int > v[2000];
queue < int > q;
int i, n, e, x, y, visit[2000], dist[2000];
int main()
{
    while(cin >> n)
    {
        if(n == 0) break;
        cin >> e;
        for(i = 0; i < e; i++)
        {
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        x=0;
        int t=0;
        visit[x] = 1;
        dist[x] = 0;
        q.push(x);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(i = 0; i < v[u].size(); i++)
            {
                int k = v[u][i];
                if(visit[k] == 0)
                {
                    visit[k] = 1;
                    dist[k] = dist[u] + 1;
                    q.push(k);
                }
                else if(dist[k] == dist[u])
                {
                    t = 1;
                    break;
                }
            }

        }
        if(t == 1)
            cout << "NOT BICOLORABLE." << endl;
        else
            cout << "BICOLORABLE." << endl;
        for(i = 0; i < n; i++)
            v[i].clear();
        q = queue < int > ();
    }
    return 0;
}
