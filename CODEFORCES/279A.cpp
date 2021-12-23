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
    int a, b, res;
    sf("%d %d", &a, &b);
    if(a == 0 && b == 0)
    {
        pf("0\n");
        return 0;
    }
    if(a == 1 && b == 0)
    {
        pf("0\n");
        return 0;
    }
    if(a > 0 && b > -(a-1) && b <= a)
    {
        res = 4*(a-1)+1;
        pf("%d\n", res);
        return 0;
    }
    if(a < 0 && b < (-1*a) && b >= a)
    {
        res = 4*((-1*a)-1)+3;
        pf("%d\n", res);
        return 0;
    }
    if(b > 0 && a < b && a >= (-1*b))
    {
        res = 4 *(b-1) +2;
        pf("%d\n", res);
        return 0;
    }
    if(b < 0 && a > b && a <= (-1*b))
    {
        res = 4 *((-1*b)-1) +4;
        pf("%d\n", res);
        return 0;
    }
    if(a > 0 && b == (-1*(a-1)))
    {
        res = 4*(a-2)+4;
        pf("%d\n", res);
        return 0;
    }
}



