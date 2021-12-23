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
#define pf printf
#define sf scanf
#define sof sizeof



int main()
{
    int n;
    sf("%d", &n);
    if(n == 1 || n == 2)
        pf("1\n");
    else
    {
        int x, y, z, w = 0, f;
        x = n / 3;
        y = n - 2*x;
        if(y == x+1 || y == x)
            z = x + y;
        else z = x+y-1;
        x = x - 1;
        y = n - 2 * x;
        if(y == x + 1 || y == x)
            w = x+y;
        (z > w)? f = z: f = w;
        pf("%d\n", f);
    }

    return 0;
}

