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
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()

char s[20][20], line[] = {'I','E','H','O','V','A'};
int cnt;
string a;
vector <string> vc;

void dfs(int i, int j)
{
    if(s[i][j-1] == line[cnt] || s[i][j-1] == '#')
    {
        a = "left";
        vc.pb(a);
        cnt++;
        if(s[i][j-1] == '#')
            return;
        else dfs(i, j-1);
    }
    if(s[i][j+1] == line[cnt] || s[i][j+1] == '#')
    {
        a = "right";
        vc.pb(a);
        cnt++;
        if(s[i][j+1] == '#')
            return;
        else dfs(i, j+1);
    }
    if(s[i-1][j] == line[cnt] || s[i-1][j] == '#')
    {
        a = "forth";
        vc.pb(a);
        cnt++;
        if(s[i-1][j] == '#')
            return;
        else dfs(i-1, j);
    }
}


int main()
{
    int t;
    sf("%d ", &t);
    while(t--)
    {
        cnt = 0;
        mc;
        int n, m, x, y;
        sf("%d %d ", &n, &m);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                sf("%c", &s[i][j]);
                if(s[i][j] == '@')
                {
                    x = i, y = j;
                }
            }
            getchar();
        }
        dfs(x,y);
        for(int i = 0; i < vc.size()-1; i++)
            cout<<vc[i]<<" ";
        cout<<vc[vc.size()-1]<<endl;
        vc.clear();
    }

    return 0;
}

