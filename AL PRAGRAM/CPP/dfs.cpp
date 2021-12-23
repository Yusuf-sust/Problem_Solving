#include <iostream>
#include<vector>
using namespace std;
vector<int>vec[100];
int ara[100];
void dfs(int u)
{
    int i,v;
    if(ara[u])
        return ;
    ara[u]=1;
    for(i=0; i<vec[u].size(); i++)
    {
        v=vec[u][i];
        dfs(v);
    }
}
int main()
{
    int n,e,c,r,co=0,i;
    cin>>n>>e;
    for(i=0; i<e; i++)
    {
        cin>>r>>c;
        vec[r].push_back(c);
        vec[c].push_back(r);
    }
    for(i=1; i<=n; i++)
    {
        if(!ara[i])
        {
            dfs(i);
            co++;
        }
    }
    cout<<co<<endl;

    return 0;
}
