#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <cstring>
#define PB push_back
using namespace std ;
vector<int>graph[300];
int cost[300][300];
int par[300];
int parbf[300];
int visited[300];

struct edge
{
    int u , v , w ;
    bool operator < (const edge&p ) const
    {
        return w<p.w ;
    }
};
vector<edge>vc;
int find(int v){
if(par[v]==v)return v;
else return par[v]=find(par[v]);
}
int mst(int n)
{
    int p,q,i;
    sort(vc.begin(),vc.end());
    for(i=1;i<=n;i++)par[i]=i;
    int s=0;
    int cnt=0;
    for(i=vc.size()-1;i>=0;i--){
       p=find(vc[i].u);
       q=find(vc[i].v);
        if(p!=q){
            s=s+vc[i].w;
            cnt++;
            graph[vc[i].u].push_back(vc[i].v);
              graph[vc[i].v].push_back(vc[i].u);
            cost[vc[i].u][vc[i].v]=cost[vc[i].v][vc[i].u]=vc[i].w;
            par[q]=p;
            if(cnt==n-1)break;
        }
    }
  return s;
}
void bfs(int start,int end){
    memset(visited,0,sizeof visited);
    visited[start]=1;
    int p,v,s,i;
    parbf[start]=start;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        s=q.front(),q.pop();
        for(i=0;i<graph[s].size();i++){
           p =graph[s][i];
            if(visited[p]==0){
                visited[p]=1;
                parbf[p]=s;
                if(p==end)return;
                q.push(p);
            }
        }
    }

}

int main()
{
    int i,j,k,l,m,n,q,u=1;
    bool ch=true;
    string str1,str2;
    while(scanf("%d%d",&n,&m)){
            if(n==0&&m==0)break;
        map<string,int>name;
            int rear=1;
            if(n==0&&m==0)break;
    for(i=0;i<m;i++){
       cin>>str1>>str2>>j;
       if(name[str1]==0){
        name[str1]=rear;
        rear++;
       }
        if(name[str2]==0){
        name[str2]=rear;
        rear++;
       }
        edge get;
        get.u=name[str1];
        get.v=name[str2];
        get.w=j;
        vc.push_back(get);
    }
   i=mst(n);
   ch=false;
cin>>str1>>str2;

if(find(name[str1])!=find(name[str2])){
    printf("Scenario #%d\n",u++);
    printf("0 tons\n");
}
else{
    bfs(name[str1],name[str2]);
    int min=214748354;
    l=name[str2];
    while(1){
            k=parbf[l];
    if(k==l)break;
        if(min>cost[l][parbf[l]])min=cost[l][parbf[l]];
        l=k;

    }
    printf("Scenario #%d\n",u++);
    printf("%d tons\n",min);
}
printf("\n");
vc.clear();
for(i=0;i<=n;i++)graph[i].clear();
name.clear();
    }
return 0;
}
