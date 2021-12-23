#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#define PB push_back
using namespace std ;
vector<int>vc[100] ;
vector<int>cost[100] ;
vector<int>line ;
int level[100] , parent[100];
struct node
{

    int vertex,weight;
    bool operator<(const node&p)const
    {
        return weight>=p.weight;
    }
};
int dijk(int p,int n)
{

    int u,v,w,i;
    //   memset(level , 10000 , sizeof level);
    priority_queue<node>q;
    node get;
    get.vertex=p;
    get.weight=0;
    level[p]=0;
    q.push(get);
    while(!q.empty())
    {
        node u=q.top();
        q.pop();
        v=u.vertex;
        //  if(v==n)return level[v];
        for(i=0; i<vc[v].size(); i++)
        {
            w=vc[v][i];
            if(level[w]>level[v]+cost[v][i])
            {
                level[w]=level[v]+cost[v][i];
                parent[w]=v;
                get.vertex=w;
                get.weight=level[w];
                q.push(get);
            }

        }
    }
    //return -1;
}
int main()
{
    int i,j,k,l,m,n;
    scanf("%d%d",&n,&m);
    for(i=0; i<m; i++)
    {
        scanf("%d%d%d",&k,&l,&j);
        vc[k].push_back(l);
        vc[l].push_back(k);
        cost[k].push_back(j);
        cost[l].push_back(j);
    }
    scanf("%d%d",&k,&l);
    i=dijk(k,l);
    if(i==-1)printf("no path");
    else printf("%d\n",i);

        return 0;
}
