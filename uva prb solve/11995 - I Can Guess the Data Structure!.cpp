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
    int x;
    bool operator < (const node&p)const
    {
        return x > p.x;
    }
};

priority_queue <node> pq;

int res()
{
    int sum = 0;
    while(pq.size() != 1)
    {
        node p, q;
        p = pq.top();
        pq.pop();
        q = pq.top();
        pq.pop();
        int a = p.x + q.x;
        sum += a;
        p.x = a;
        pq.push(p);
    }
    pq.pop();
    return sum;
}


int main()
{
    int n, x;
    while(sf("%d", &n) == 1 && n)
    {
        for(int i = 1; i <= n; i++)
        {
            sf("%d", &x);
            node p;
            p.x = x;
            pq.push(p);
        }
        int r = res();
        pf("%d\n", r);
    }

    return 0;
}


