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


priority_queue <db> pq;

db add()
{
    while(pq.size()!=1)
    {
        db p = pq.top();
        pq.pop();
        db q = pq.top();
        pq.pop();
        p = 2 * sqrt(p * q);
        pq.push(p);
    }
    db p = pq.top();
    pq.pop();
    return p;
}


int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        db x;
        sf("%lf", &x);
        pq.push(x);
    }
    db res = add();
    pf("%.2lf\n", res);


    return 0;
}


