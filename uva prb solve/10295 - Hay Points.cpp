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



int main()
{
    int m, n, x;
    string t;
    char s[10000];
    map <string,int> mp;
    ll salary;
    sf("%d %d ", &m, &n);
    for(int i = 1; i <= m; i++)
    {
        cin>>t>>x;
        mp[t] += x;
    }
    for(int i = 1; i <= n; i++)
    {
        salary = 0;
        while(cin>>t)
        {
            if(t == ".")break;
            salary += mp[t];
        }
        pf("%lld\n", salary);
    }
    mp.clear();

    return 0;
}

