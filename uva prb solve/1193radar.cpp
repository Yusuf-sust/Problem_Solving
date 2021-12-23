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

using namespace std;

#define Max 10000
const double eps = 1e-10;

struct Interval {
    double st, en;
    Interval() {}
    Interval(double s, double e) {
        st = s, en = e;
    }
    bool operator < (const Interval &i) const {
        return (i.en == en) ? (st < i.st) : (en < i.en);
    }
};
long double x[Max], y[Max];
Interval inter[Max];

int main(void) {
    int n, d, testcase = 0;
    while(scanf("%d %d", &n, &d) == 2 && !(n == 0 && d == 0)) {
        for(int i = 0; i < n; i++)
            scanf("%Lf %Lf", &x[i], &y[i]);
        int count = 0, ok = true;
        for(int i = 0; i < n; i++) {
            if(d < y[i]) {
                ok = false;
                break;
            } else {
                long double sqrtd = sqrt( d * d - y[i] * y[i] );
                inter[i] = Interval(x[i] - sqrtd, x[i] + sqrtd);
            }
        }
        if(!ok) {
            printf("Case %d: %d\n", ++testcase, -1);
            continue;
        }
        sort(inter, inter + n);

        for(int i = 0; i < n;) {
            int j;
            for(j = 0; j < n; j++) {
                if(inter[j].st > inter[i].en)
                    break;
            }
            i = j;
            count++;
        }
        printf("Case %d: %d\n", ++testcase, count);
    }
    return 0;
}
