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
    int t;
    db a, b, r, c, m, n, x1, x2, y1, y2;
    sf("%d", &t);
    while(t--)
    {
        sf("%lf %lf %lf %lf %lf %lf", &a, &b, &r, &c, &m, &n);
        if(m == ((2*a+c)/2) && n == ((2*b+r)/2))
        {
            pf("%lf %lf\n", ((2*a+c)/2), b);
            pf("%lf %lf\n", ((2*a+c)/2), b+r);
            continue;
        }
        x1 = ((b-n)*(2*m-2*a-c))/(2*n-2*b-r);
        x1 += m;
        if(x1 >= a && x1 <= a+c)
        {
            x2 = ((b+r-n)*(2*m-2*a-c))/(2*n-2*b-r);
            x2 += m;
            if(x1 > x2)
            {
                pf("%lf %lf\n", x2, b+r);
                pf("%lf %lf\n", x1, b);
            }
            else
            {
                pf("%lf %lf\n", x1, b);
                pf("%lf %lf\n", x2, b+r);
            }
        }
        else
        {
            y1 = ((a-m)*(2*n-2*b-r))/(2*m-2*a-c);
            y1 += n;
            y2 = ((a+c-m)*(2*n-2*b-r))/(2*m-2*a-c);
            y2 += n;
            pf("%lf %lf\n", a, y1);
            pf("%lf %lf\n", a+c, y2);
        }
    }


    return 0;
}

