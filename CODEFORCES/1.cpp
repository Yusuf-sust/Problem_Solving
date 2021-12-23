#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, x, ans;
    scanf("%lf %lf %lf", &a, &b, &x);
    a /= x;
    a = ceil(a);
    b /= x;
    b = ceil(b);
    ans = a*b;
    printf("%.0lf\n", ans);

    return 0;
}
