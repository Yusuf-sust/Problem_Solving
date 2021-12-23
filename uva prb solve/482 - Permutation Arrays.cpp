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

struct node
{
    int num;
    string sss;
    bool operator < (const node&p)const
    {
        return num < p.num;
    }
};



int main()
{
    char s[100000];
    int x, t;
    sf("%d ", &t);
    while(t--)
    {
        vector <int> v;
        vector <string> vs;
        vector <node> nd;
        gets(s);
        stringstream st (s);
        while(st >> x)
        {
            v.pb(x);
        }
        gets(s);
        string ss;
        stringstream sp (s);
        while(sp >> ss)
        {
            vs.pb(ss);
        }
        for(int i = 0; i < v.size(); i++)
        {
            node p;
            p.num = v[i];
            p.sss = vs[i];
            nd.pb(p);
        }
        sort(nd.begin(),nd.end());
        for(int i = 0; i < nd.size(); i++)
        {
            node p = nd[i];
            cout<<p.sss<<endl;
        }
        if(t)
        {
            pf("\n");
            getchar();
        }
    }

    return 0;
}
