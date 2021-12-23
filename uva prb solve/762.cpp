#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define ve (vc.begin(),vc.end())
#define mod 1000000007
#define m0 memset(a,0,sizeof(a))
#define ms memset(a,-1,sizeof(a))
#define mc memset(s,'0',sizeof(s))
#define mv memset(visit, o, sizeof(visit))
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
#define getint(n) scanf("%d", &n)


using namespace std;


map<string, vector<string> > graph;
map<string, int>visited;

map<string, string> root;


void bfs(string from, string to)
{
    int len;
    string s, temp;
    queue<string> Q;
    Q.push(to);
    visited[to] = 1;
    while( ! Q.empty() )
    {
        s = Q.front();
        len = graph[s].size();
        for(int i = 0; i < len; i++)
        {
            temp = graph[s][i];
            if(! visited[temp] )
            {
                root[temp] = s;
                if(temp == from)
                {
                    return;
                }
                visited[temp] = 1;
                Q.push(temp);
            }
        }
        Q.pop();
    }
    return;

}




int main()
{
    int n;
    string s1, s2;
    bool flag = false;
    while(sf("%d", &n) == 1)
    {
        graph.clear();
        root.clear();
        visited.clear();
        for(int i = 1; i <= n; i++)
        {
            cin>>s1>>s2;
            graph[s1].pb(s2);
            graph[s2].pb(s1);
        }

        cin>>s1>>s2;
        bfs(s1, s2);


        if(flag)
        {
            printf("\n");
        }
        flag = true;

        if(root[s1] == "")
        {
            printf("No route\n");
            continue;
        }


        while( s1 != s2)
        {
            cout<<s1<<" ";
            s1 = root[s1];
            cout<<s1;
            cout<<endl;
        }

    }



    return 0;
}
