#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m, n, o, p, sum;
    int i, x;
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        scanf("%lf %lf %lf %lf", &m, &n, &o, &p);
        sum = (m*o)*p;
        printf("Case %d: %lf\n", i, sum);
    }

    return 0;
}
