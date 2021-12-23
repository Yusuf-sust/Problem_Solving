#include <bits/stdc++.h>
using namespace std;

int visit[100000], dist[100000];

void BFS(int start, vector <int> *a);

int main()
{
    int n, t = 1;
    while(scanf("%d", &n) && n)
    {
        int j = 0;
        vector <int> a[100000];
        set <int> s;
        map <long, int> m;
        for(int i = 0; i < n; ++i)
        {
            long  f, t;
            cin>>f>>t;
            if(m[f] == 0)
                m[f] = ++j;
            if(m[t] == 0)
                m[t] = ++j;
            //cout<<m[f]<<" "<<m[t]<<endl;
            s.insert(m[f]);
            s.insert(m[t]);
            a[m[f]].push_back(m[t]);
            a[m[t]].push_back(m[f]);
        }
        long x, y;
        while(scanf("%d %d", &x, &y) && x || y)
        {
            int sum = 0;
            BFS(m[x],a);
            set <int> :: iterator it;
            for(it = s.begin(); it != s.end(); it++)
            {
                if(dist[*it] > y || dist[*it] == 0)
                    sum++;
            }
            printf("Case %d: %d nodes not reachable from node %ld with TTL = %ld.\n", t++, sum-1, x, y);
            memset(visit, 0, sizeof(visit));
            memset(dist, 0, sizeof(dist));

        }
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
                dist[v] += dist[u] + 1;
                p.push(v);
            }
        }
    }
}

