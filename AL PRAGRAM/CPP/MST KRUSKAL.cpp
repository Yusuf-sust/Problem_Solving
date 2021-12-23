#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v,w;
    bool operator < (const edge&p)
    const
    {
        return w<p.w;
    }
};

int pr[100];
vector<edge>vec;

int par(int n)
{
    return (pr[n]==n) ? n : par(pr[n]);
}


int mst(int n)
{
    int i,j,k,l=0,u,v;
    int s=0;
    sort(vec.begin(),vec.end());
    for(i=1; i<=n; i++)
    {
        pr[i]=i;
    }
    for(i=0; i<vec.size(); i++)
    {
        u=par(vec[i].u);
        v=par(vec[i].v);
        if(u!=v)
        {
            pr[u]=v;
            l++;
            s+=vec[i].w;
            if(l==n-1) break;
        }
    }
    return s;
}


int main()
{
    int i,j,k,l,n,m;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge e;
        e.u=u;
        e.v=v;
        e.w=w;
        vec.push_back(e);
    }
    cout<<mst(n);
    return 0;
}

