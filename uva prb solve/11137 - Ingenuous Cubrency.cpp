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

ll ways[10010];

void pre()
{
    ways[0] = 1;
    for(int i = 1; i <= 22; i++)
    {
        int coin = i*i*i;
        for(int j = coin; j <= 10000; j++)
            ways[j] += ways[j-coin];
    }
}

int main()
{
    pre();
    int n;
    while(sf("%d", &n) == 1)
    {
        pf("%lld\n", ways[n]);
    }
    return 0;
}




