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
    int n, h, k;
    int cnt = 0;
    priority_queue <int> pq;
    sf("%d %d %d", &n, &h, &k);
    for(int i = 1; i <= n; i++)
    {
        int x;
        sf("%d", &x);
        pq.push(x);
    }
    int x = 0;
    while(!pq.empty())
    {
        while(1)
        {
            if(pq.size()&&(x+pq.top()) <= h)
            {
                x += pq.top();
                pq.pop();
            }
            else break;
        }
        cnt += x / k;
        x = x % k;
        if(x + pq.top() > h)
        {
            x = 0;
            cnt++;
        }
    }
    if(x)cnt++;
    pf("%d\n", cnt);

    return 0;
}


