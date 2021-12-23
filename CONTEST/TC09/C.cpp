#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <set>
const int MAXN = 1e5+10;
using namespace std;
const int INF = 1e9;
int a[MAXN], x[MAXN], p[MAXN];

struct compare
{
    bool operator() (const int s1, const int s2) const
    {
        if(a[s1]==a[s2]) return s1<s2;
        return a[s1]>a[s2];
    }
};
set<int,compare>s;
set<int,compare>:: iterator it;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        s.clear();
        int n, q;
        memset(a, 0, sizeof(a));
        scanf("%d%d",&n,&q);
        for(int i=1; i<=q; i++)
        {
            scanf("%d%d",&x[i],&p[i]);
            a[x[i]] += p[i];
        }
        int Max = -INF, tmp = -1;
        for(int i=1; i<=n; i++)
        {
            if(a[i] > Max)
            {
                Max = a[i];
                tmp = i;
            }
        }
        memset(a, 0, sizeof(a));
        for(int i=1;i<=n;i++)
            s.insert(i);
        int pos = 0;
        if(*s.begin()!=tmp) pos=1;
        for(int i=1; i<=q; i++)
        {
            s.erase(x[i]);
            a[x[i]] += p[i];
            s.insert(x[i]);
            if(*s.begin()!=tmp) pos=i+1;
        }
        printf("%d\n",pos);
    }
    return 0;
}
