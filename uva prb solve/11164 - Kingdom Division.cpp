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

    db a, b, c, d;
    int i = 1;
    while(sf("%lf %lf %lf", &a, &b, &c)==3)
    {
        if(a == -1) break;
        if((b * b - a * c) <= 0)
            pf("Set %d:\nPoor King!\n", i++);
        else
        {
            d = a*c*(a+2*b+c);
            d /= b*b-a*c;
            pf("Set %d:\n%.4lf\n", i++, d);
        }
    }


    return 0;
}

