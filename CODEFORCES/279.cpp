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
    db r, x, y, x1, y1;
    sf("%lf %lf %lf %lf %lf", &r, &x, &y, &x1, &y1);
    db ans = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    ans /= 2*r;
    ans = ceil(ans);
    pf("%.0lf\n", ans);

    return 0;
}
