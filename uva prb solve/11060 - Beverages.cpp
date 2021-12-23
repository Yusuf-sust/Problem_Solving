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

vector <int> ans;
map <string,int> mp;
string ss[110];
int visit[110], ind[110], ar[110][110];


int main()
{
    freopen("outputinput.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, x = 1;
    string a, b;
    while(sf("%d", &n) == 1)
    {
        memset(visit, 0, sof(visit));
        memset(ind, 0, sof(visit));
        memset(ar, 0, sof(ar));
        for(int i = 1; i <= n; i++)
        {
            cin>>a;
            mp[a] = i;
            ss[i] = a;
        }
        sf("%d", &m);
        for(int i = 1; i <= m; i++)
        {
            cin>>a>>b;
            int s = mp[b], d = mp[a];
            ar[d][s] = 1;
            ind[s]++;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(!visit[j] && !ind[j])
                {
                    visit[j] = 1;
                    ans.pb(j);
                    for(int k = 1; k <= n; k++)
                    {
                        if(!visit[k] && ar[j][k])ind[k]--;
                    }
                    break;
                }
            }
        }
        pf("Case #%d: Dilbert should drink beverages in this order:", x++);
        for(int i = 0; i < ans.size(); i++)
        {
            cout<<" "<<ss[ans[i]];
        }
        pf(".\n\n");
        ans.clear();
        mp.clear();
    }


    return 0;
}

