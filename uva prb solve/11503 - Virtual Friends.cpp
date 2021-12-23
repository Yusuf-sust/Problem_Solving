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

map<string, string> p;
map<string, int> num;

string find(string x)
{
    return x == p[x] ? x : (p[x] = find(p[x]));
}

void add(string a, string b)
{
    string x = find(a), y = find(b);
    if (x == y)
    {
        printf("%d\n", num[y]);
        return;
    }
    num[y] += num[x];
    num[x] = 0;
    p[x] = y;
    printf("%d\n", num[y]);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        p.clear();
        num.clear();
        int n;
        scanf("%d", &n);
        while (n--)
        {
            char a[30], b[30];
            scanf("%s%s", a, b);
            string s1 = string(a), s2 = string(b);
            if (!p.count(s1)) p[s1] = s1, num[s1] = 1;
            if (!p.count(s2)) p[s2] = s2, num[s2] = 1;
            add(s1, s2);
        }
    }
    return 0;
}


