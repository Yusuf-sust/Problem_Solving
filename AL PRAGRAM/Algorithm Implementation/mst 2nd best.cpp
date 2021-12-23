#include<bits/stdc++.h>
using namespace std ;
int m , n , s , par[1000] ;
struct edge
{
    int u , v , w ,o;
    bool operator < (const edge&p ) const
    {
        return w<p.w ;
    }
};
vector <edge> graph ;
int find_par(int v)
{
    if(par[v] == v)
        return v ;

    else
        return par[v] = find_par(par[v]) ;
}
int mst(int u)
{
    int p , q ;
    sort(graph.begin(),graph.end());
    for(int i = 1 ; i<=n ; i++)
        par[i] = i ;

    s = 0 ;
    int cont = 0 ;

    for(int i=0; i<graph.size() ; i++)
    {
        if(i==u)
            continue;
        p = find_par(graph[i].u);
        q = find_par(graph[i].v);
        if(p!=q)
        {
            par[q] = p ;
            cont++;
            s += graph[i].w;
            if(u==-1)
                graph[i].o=1;
            if(cont == n-1)
                break;
        }
    }
    return s;
}
int main()
{
    int i,j,k,l;
    int ara[1000];
    scanf("%d %d",&n,&m);

    for(int i=0 ; i<m ; i++)
    {
        int u , v , w ;
        scanf("%d %d %d",&u,&v,&w);

        edge get ;

        get.u = u ;
        get.v = v ;
        get.w = w ;
        get.o=0;

        graph.push_back(get);
    }
    ara[0]=mst(-1);
    printf("%d\n",ara[0]);
    j=1;
    for(i=0;i<graph.size();i++)
        if(graph[i].o==1){
            ara[j]=mst(i);
                j++;}
    for(i=0;i<j;i++)
        printf("%d ",ara[i]);
    return 0 ;
}

