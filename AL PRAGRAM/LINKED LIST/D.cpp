#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, a1, a2;
    scanf("%d %d", &l, &r);
    a1 = 40 + 2 * r;
    a2 = 39 + 2* l;
    if(a1 > a2)
        printf("%d\n", a1);
    else
        printf("%d\n", a2);

    return 0;
}
